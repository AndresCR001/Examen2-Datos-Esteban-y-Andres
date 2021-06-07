#pragma once
//
// Created by Esteb on 6/6/2021.
//

#ifndef EXAMEN2_NODO_H
#define EXAMEN2_NODO_H
#include <iostream>
using namespace std;
struct nodo {
    double numero;
    nodo* siguiente;
    nodo* anterior;

    nodo(int n) {
        numero = n;
        siguiente = NULL;
        anterior = NULL;
    }


}*primero, * ultimo;


#endif //PRUEBASPROYECTO_NODO_H

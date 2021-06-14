#pragma once
#include <iostream>
using namespace std;
struct nodo {
    nodo() {
    }
    int numero;
    nodo* siguiente;
    nodo* anterior;

    nodo(int n) {
        numero = n;
        siguiente = NULL;
        anterior = NULL;
    }

}*primero, * ultimo;

nodo* nodobuscar(nodo* primero, int indice) {
    /*
     * Funcion que busca el nodo que marca el indice
     */
    nodo* actual = new nodo();
    actual = primero;
    for (int i = 0; i < indice; i++) { //cuente hasta el índice, ese será el nodo
        actual = actual->siguiente; //pase el siguiente a cualquiera para que sea el proximo actual
    }
    return  actual; //retorne el nodo que quedó
}
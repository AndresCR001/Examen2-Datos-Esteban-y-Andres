#pragma once


#define CANTIDAD 1000
#include <iostream>

using namespace std;
class Lista {
    /*
     * Clase lista que serán los vectores testeados en los ordenamientos
     * */
public:
    int lista[CANTIDAD]; //cantidad es un define, un valor que tendrá el tamaño definido del arreglo
    Lista() {

    }
    void llenarLista();
    void imprimirLista();

};
void Lista::llenarLista() {
    /*
     * llena la lista de random numbers
     * */
    for (int i = 0; i < CANTIDAD; i++) {
        lista[i] = rand();
    }
}
void Lista::imprimirLista() {
    /*
     * Imprime la lista pero esta funcion se puede omitir
     * */
    for (int i = 0; i < CANTIDAD; i++) {
        cout << "El valor de la lista Normal en la posición " << i << " es: " << lista[i] << endl;
    }

}


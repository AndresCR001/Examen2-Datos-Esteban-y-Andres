#pragma once

#include "nodo.h"
class Pila {

public:
    nodo* primero;
    Pila() {
        primero = NULL;
    }

    void LlenarPila(int cantidad);
    void imprimirPila();
private:
    void InsertarPila(int dato);
};

void Pila::LlenarPila(int cantidad) {
    /*
     * LLena la ila con la cantidad de numeros aleatorios que yo le quiera ingresar
     * */

    for (int i = 0; i < cantidad; i++) { //se repetir� 70 000 000
        int aleatorio = rand();
        InsertarPila(aleatorio);
    }
}
void Pila::InsertarPila(int dato) {

    if (primero == NULL) {
        primero = new nodo(dato); //como es una pila lo �nico que ocupamos es el primer valor
        //as� que ese primero ser� como el tope de la pila
    }
    else {
        nodo* nuevo = new nodo(dato); //ocupamos un nodo nuevo para insertarlo al tope
        nuevo->siguiente = primero; //el primero pasar� a ser el siguiente
        primero = nuevo; //para que el nuevo sea ahora el primero
    }
}
void Pila::imprimirPila() {
    nodo* actual = primero;
    while (actual != NULL) { //hasta que actual sea NULL (Null porque significa qeu ya no hay m�s)
        cout << actual->numero << endl;
        actual = actual->siguiente; //para recorrer la pila
    }

}

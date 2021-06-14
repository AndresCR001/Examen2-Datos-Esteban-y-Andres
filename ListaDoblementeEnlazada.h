#pragma once
#include "nodo.h"
class ListaDoblementeEnlazada {

public:
    nodo* primero;
    nodo* ultimo;
    ListaDoblementeEnlazada() {
        primero = NULL;
        ultimo = NULL;
    }

    void llenarLista(int cantidad);
    void imprimirListaDoblemente();
private:
    void insertarListaDoble(int dato);
};
void ListaDoblementeEnlazada::llenarLista(int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        int aleatorio = rand();
        insertarListaDoble(aleatorio);
    }
}
void ListaDoblementeEnlazada::insertarListaDoble(int dato) {
    nodo* nuevo = new nodo(dato); // crear el nodo que ser� insertado
    if (primero == NULL) { //si el primero es NULL entonces que el primero sea el nuevo nodo
        primero = nuevo;
        primero->siguiente = NULL; //el siguiente ser� nulo porque a�n no lo conocemos
        primero->anterior = NULL; //el anterio ser� nulo tambi�n porque el primer valor ser� el primero literalmente
        ultimo = primero;     //ahora el primero pasa a ser el �ltimo porque es �nico
    }
    else {
        ultimo->siguiente = nuevo; //si no es nulo, pasele el nuevo nodo al siguiente del �ltimo
        nuevo->siguiente = NULL;    //el siguiente es null porque a�n no conocemos cu�l ser� el pr�ximo nodo
        nuevo->anterior = NULL;
        ultimo = nuevo; //ahora el nuevo ser� el �ltimo insertado
    }
}
void ListaDoblementeEnlazada::imprimirListaDoblemente() {
    nodo* actual = primero;
    while (actual != NULL) {
        cout << actual->numero << endl;
        actual = actual->siguiente;
    }
}
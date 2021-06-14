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
    nodo* nuevo = new nodo(dato); // crear el nodo que será insertado
    if (primero == NULL) { //si el primero es NULL entonces que el primero sea el nuevo nodo
        primero = nuevo;
        primero->siguiente = NULL; //el siguiente será nulo porque aún no lo conocemos
        primero->anterior = NULL; //el anterio será nulo también porque el primer valor será el primero literalmente
        ultimo = primero;     //ahora el primero pasa a ser el último porque es único
    }
    else {
        ultimo->siguiente = nuevo; //si no es nulo, pasele el nuevo nodo al siguiente del último
        nuevo->siguiente = NULL;    //el siguiente es null porque aún no conocemos cuál será el próximo nodo
        nuevo->anterior = NULL;
        ultimo = nuevo; //ahora el nuevo será el último insertado
    }
}
void ListaDoblementeEnlazada::imprimirListaDoblemente() {
    nodo* actual = primero;
    while (actual != NULL) {
        cout << actual->numero << endl;
        actual = actual->siguiente;
    }
}
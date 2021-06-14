#pragma once
#include <stdlib.h>
#include "nodo.h"
class Cola {
public:
    nodo* primero;
    nodo* ultimo;
    Cola() {
        primero = NULL; //declaro primero y últimos como nulos
        ultimo = NULL;
    }
    void llenarCola(int  cantidad); //llena la cola Circular con la cantidad de enteros que yo quiera
    void imprimirCola(); //imprime la cola para ver el funcionamiento correcto de los ordenamientos pero se puede omitir
private:
    void insertarcola(int dato);
};


void Cola::insertarcola(int dato)
{
    nodo* nuevo = new nodo(dato); //creo un nodo con el dato que quiero de entrada
    if (primero == NULL) { //si primero es nulo siginifica que no se ha empezado a llenar
        primero = ultimo = nuevo; //el nuevo nodo es igual al primero y al último de la cola circular
        primero->siguiente = primero; //el primero pasa a ser igual al siguiente
    }
    else { //cuando ya se ha creado
        ultimo->siguiente = nuevo; // nuevo es igual al último siguiente (porque es circular)
        nuevo->siguiente = primero; //el primero pasará a ser al siguiente del nuevo
        ultimo = nuevo;
    }
}
void Cola::llenarCola(int cantidad) {
    /*
     * Funcion que me llena la cola con la cantidad de números aleatorios que le ingrese
     * Entrada:La cantidad de aleatorios
     * Salida: la cola llena de muchos random
     * */
    for (int i = 0; i < cantidad; i++) {
        int aleatorio = rand();
        insertarcola(aleatorio);
    }
}
void Cola::imprimirCola() {
    /*
    * Funcion que me imprime la cola
    */
    nodo* actual = primero;
    do {
        cout << actual->numero << endl;
        actual = actual->siguiente;
    } while (actual != primero);

}

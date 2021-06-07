#pragma once
//
// Created by Esteb on 6/6/2021.
//

#ifndef EXAMEN2_ALGORITMOSTDA_H
#define EXAMEN2_ALGORITMOSTDA_H

#include "nodo.h"
#include "Colacircular.h"
#define CANTIDAD 7000

//esto creo que no debe implicar en la forma en lo que lo estoy desarrollando
//void insertarPrimero(Nodo** cabeza, Item entrada);


using namespace std;
/*
 * ------------------------------------------------------------------------------------------------------------------
 * Implementaci�n TDA insertar en lista Doblemente Enlazada               LISTA DOBLEMENTE ENLAZADA
 * ------------------------------------------------------------------------------------------------------------------
 */
nodo* InsertarEnListaDoblementeEnlazada(int cantidad) {
    for (int i = 0; i < cantidad; i++) { //Ciclo que me generar� un random e inserta el n�mero din�micamente)
        nodo* nuevo = new nodo(rand()); // crear el nodo que ser� insertado
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
        return primero;
    }
}
/*
 * ------------------------------------------------------------------------------------------------------------------
 * Implementaci�n TDA insertar en PILA                                       PILA
 * ------------------------------------------------------------------------------------------------------------------
 */
void InsertarPila(int cantidad) {

    nodo* pila = NULL; //es el nodo anterior
    for (int i = 0; i < cantidad; i++) { //se repetir� 70 000 000
        nodo* nuevo = new nodo(rand());
        nuevo->siguiente = pila; //el siguiente nodo ser� la
        pila = nuevo;  //el nuevo paselo para que se convierta en la pr�xima base para el siguiente nodo
    }
}
/*
 * ------------------------------------------------------------------------------------------------------------------
 * Implementaci�n TDA insertar en COLA CIRCULAR                            COLA CIRCULAR
 * ------------------------------------------------------------------------------------------------------------------
 */
void Insertarcolacircular(int cantidad) {
    Cola cola;
    crearCola(&cola);
    for (int i = 0; i < cantidad; i++) {
        insertarEncola(&cola, rand());
    }
}
/*
 * ------------------------------------------------------------------------------------------------------------------
 * Implementaci�n TDA insertar en COLA CIRCULAR                            COLA CIRCULAR
 * ------------------------------------------------------------------------------------------------------------------
 */
int *InsertarLista(int cantidad) {
    int vector[7000];
    for (int i = 0; i < cantidad; i++) {
        vector[i] = rand();
    }
    return vector;
}

/*
 * ------------------------------------------------------------------------------------------------------------------
 * FUNCIONES �TILES DE NODO
 * ------------------------------------------------------------------------------------------------------------------
 */
nodo* nodobuscar(nodo* cualquiera, int indice) {
    /*
     * Funcion que busca el nodo que marca el indice
     */
    for (int i = 0; i < indice; i++) { //cuente hasta el �ndice, ese ser� el nodo
        cualquiera = cualquiera->siguiente; //pase el siguiente a cualquiera para que sea el proximo actual
    }
    return  cualquiera; //retorne el nodo que qued�
}

nodo* base(nodo* cualquiera) {
    while (cualquiera->anterior != NULL) { //Para buscar la base o el primero
        cualquiera = cualquiera->anterior; //pase el anterior al cualquiera para que sea el pr�ximo actual
    }
    return cualquiera;
}

#endif //PRUEBASPROYECTO_ALGORITMOSTDA_H
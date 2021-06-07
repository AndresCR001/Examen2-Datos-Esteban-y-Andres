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
 * Implementación TDA insertar en lista Doblemente Enlazada               LISTA DOBLEMENTE ENLAZADA
 * ------------------------------------------------------------------------------------------------------------------
 */
nodo* InsertarEnListaDoblementeEnlazada(int cantidad) {
    for (int i = 0; i < cantidad; i++) { //Ciclo que me generará un random e inserta el número dinámicamente)
        nodo* nuevo = new nodo(rand()); // crear el nodo que será insertado
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
        return primero;
    }
}
/*
 * ------------------------------------------------------------------------------------------------------------------
 * Implementación TDA insertar en PILA                                       PILA
 * ------------------------------------------------------------------------------------------------------------------
 */
void InsertarPila(int cantidad) {

    nodo* pila = NULL; //es el nodo anterior
    for (int i = 0; i < cantidad; i++) { //se repetirá 70 000 000
        nodo* nuevo = new nodo(rand());
        nuevo->siguiente = pila; //el siguiente nodo será la
        pila = nuevo;  //el nuevo paselo para que se convierta en la próxima base para el siguiente nodo
    }
}
/*
 * ------------------------------------------------------------------------------------------------------------------
 * Implementación TDA insertar en COLA CIRCULAR                            COLA CIRCULAR
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
 * Implementación TDA insertar en COLA CIRCULAR                            COLA CIRCULAR
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
 * FUNCIONES ÚTILES DE NODO
 * ------------------------------------------------------------------------------------------------------------------
 */
nodo* nodobuscar(nodo* cualquiera, int indice) {
    /*
     * Funcion que busca el nodo que marca el indice
     */
    for (int i = 0; i < indice; i++) { //cuente hasta el índice, ese será el nodo
        cualquiera = cualquiera->siguiente; //pase el siguiente a cualquiera para que sea el proximo actual
    }
    return  cualquiera; //retorne el nodo que quedó
}

nodo* base(nodo* cualquiera) {
    while (cualquiera->anterior != NULL) { //Para buscar la base o el primero
        cualquiera = cualquiera->anterior; //pase el anterior al cualquiera para que sea el próximo actual
    }
    return cualquiera;
}

#endif //PRUEBASPROYECTO_ALGORITMOSTDA_H
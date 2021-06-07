#pragma once
//
// Created by Esteb on 6/6/2021.
//
#include <ctime>
#ifndef EXAMEN2_ORDENAMIENTO_H
#define EXAMEN2_ORDENAMIENTO_H
#include "nodo.h"
#include "AlgoritmosTDA.h"
class Ordenamiento {

public:
    int cantidad = 7000; //cambiar esto por 70millones
  /*------------------------------------------------------------------------------------------------------------------
   * Algoritmos de ordenamiento mediante burbuja
   * 1) Con punteros p
   * 2) Con vectores
   *------------------------------------------------------------------------------------------------------------------
   */

    void bubblesortPuntero(nodo* a) {
        //unsigned t0, t1;
        //t0 = clock();//determino un punto de inicio para el reloj
        double n = this->cantidad;
        int interruptor = 1;
        int pasada, j;

        for (pasada = 0; pasada < n - 1 && interruptor; pasada++)
        {
            nodo* nodoJ = a;
            for (j = 0; j < n - pasada - 1; j++) {

                if (nodoJ->numero > nodoJ->siguiente->numero) {
                    double aux;
                    interruptor = 1;
                    aux = nodoJ->numero;
                    nodoJ->numero = nodoJ->siguiente->numero;
                    nodoJ->siguiente->numero = aux;
                }
                nodoJ = nodoJ->siguiente;
            }
        }
       // t1 = clock();//punto final del reloj
        //double time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
        //return time;//retorno el tiempo en segundos

    }
    void bubblesortVector(int a[]) { // ordenamiento por vector
        
        //double n = cantidad;
        int interruptor = 1;
        int pasada, j;
        int n = this->cantidad;
        for (pasada = 0; pasada < n - 1 && interruptor; pasada++)
        {

            for (j = 0; j < n - pasada - 1; j++)
                if (a[j] > a[j + 1])
                {
                    long aux;
                    interruptor = 1;
                    aux = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = aux;

                }
        }
       
           
    }
    /*------------------------------------------------------------------------------------------------------------------
   * Algoritmos de ordenamiento mediante selección
   * 1) Con punteros p
   * 2) Con vectores
     * ----------------------------------------------------------------------------------------------------------------
   */

    void ordenSeleccionPuntero(nodo* a)
    {
        int n = this->cantidad;
        nodo* nodoBase = base(a);
        int indiceMenor, i, j;
        for (i = 0; i <= n - 1; i++) {
            nodo* nodoJ = a;
            indiceMenor = i;

            for (j = i + 1; j < n; j++) {
                if (nodoJ->numero > nodobuscar(nodoBase, indiceMenor)->numero) indiceMenor = j;

                nodoJ = nodoJ->siguiente;
            }

            if (i != indiceMenor)
            {
                double aux = nodobuscar(nodoBase, i)->numero;  //cómo hago para acceder a esa posición con punteros
                nodobuscar(nodoBase, i)->numero = nodobuscar(nodoBase, indiceMenor)->numero;
                nodobuscar(nodoBase, indiceMenor)->numero = aux;
            }
        }
       
    }
    void ordenSeleccionVector(int a[]) {
        int n = this->cantidad;
       
        int indiceMenor, i, j;

        for (i = 0; i <= n - 1; i++) {
            indiceMenor = i;

            for (j = i + 1; j < n; j++)

                if (a[j] > a[indiceMenor]) indiceMenor = j;

            if (i != indiceMenor) {
                int aux = a[i];
                a[i] = a[indiceMenor];
                a[indiceMenor] = aux;
            }
        }
    }
/*------------------------------------------------------------------------------------------------------------------
  * Algoritmos de ordenamiento mediante insercion
  * 1) Con punteros p
  * 2) Con vectores
  *---------------------------------------------------------------------------------------------------------------------
  */
    void ordenInsercionVectorPuntero(nodo* a)
    {
        int n = this->cantidad;
        int i, j;
        double aux;
        nodo* nodoBase = base(a);
        for (i = 1; i < n; i++)
        {
            j = i;
            aux = nodobuscar(nodoBase, i)->numero;

            while (j > 0 && aux < nodobuscar(nodoBase, j - 1)->numero)
            {
                nodobuscar(nodoBase, j)->numero = nodobuscar(nodoBase, j - 1)->numero;
                j--;

            }
            nodobuscar(nodoBase, j)->numero = aux;
        }
    }
    void ordenInsercionVector(int a[])
    {
        int n = this->cantidad;
        int i, j;
        int aux;

        for (i = 1; i < n; i++)
        {
            j = i;
            aux = a[i];

            while (j > 0 && aux < a[j - 1])
            {
                a[j] = a[j - 1];
                j--;

            }

            a[j] = aux;

        }
    }

    /*------------------------------------------------------------------------------------------------------------------
    * Algoritmos de ordenamiento mediante QUICKSORT
    * 1) Con punteros p
    * 2) Con vectores
    *---------------------------------------------------------------------------------------------------------------------
    */

    void quickSortPuntero(nodo* a, int primero, int ultimo)  //int primero= 0, int ultimo = 70 000 000 -1
    {
        nodo* nodoBase = base(a);
        int i, j, central;
        double pivote;
        nodo* nodoA = a;
        central = (primero + ultimo) / 2;
        pivote = nodobuscar(nodoBase, central)->numero;
        i = primero;
        j = ultimo;

        do {
            while (nodobuscar(nodoBase, i)->numero < pivote) i++;
            while (nodobuscar(nodoBase, j)->numero > pivote) j--;

            if (i <= j)
            {
                double tmp;
                tmp = nodobuscar(nodoBase, i)->numero;
                nodobuscar(nodoBase, i)->numero = nodobuscar(nodoBase, j)->numero;
                nodobuscar(nodoBase, j)->numero = tmp;
                i++;
                j--;
            }
        } while (i <= j);

        if (primero < j) quickSortPuntero(a, primero, j);
        if (i < ultimo) quickSortPuntero(a, i, ultimo);

    }

    void quickSortVector(double a[], int primero, int ultimo)  //int primero= 0, int ultimo = 70 000 000 -1
    {
        int i, j, central;
        double pivote;

        central = (primero + ultimo) / 2;
        pivote = a[central];
        i = primero;
        j = ultimo;

        do {
            while (a[i] < pivote) i++;
            while (a[j] > pivote) j--;

            if (i <= j)
            {
                double tmp;
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
                i++;
                j--;
            }
        } while (i <= j);

        if (primero < j) quickSortVector(a, primero, j);
        if (i < ultimo) quickSortVector(a, i, ultimo);
    }
    /*------------------------------------------------------------------------------------------------------------------
    * Algoritmos de ordenamiento mediante Shell
    * 1) Con punteros p
    * 2) Con vectores
    *---------------------------------------------------------------------------------------------------------------------
    */
    void ordenShellPuntero(nodo* a)
    {
        int n = this->cantidad;
        int intervalo, i, j, k;
        nodo* nodoBase = base(a);

        intervalo = n / 2;

        while (intervalo > 0)
        {
            for (i = intervalo; i < n; i++)
            {
                j = i - intervalo;
                while (j >= 0)
                {
                    k = j + intervalo;
                    if (nodobuscar(nodoBase, j)->numero <= nodobuscar(nodoBase, k)->numero) j = -1;
                    else
                    {
                        double temp;
                        temp = nodobuscar(nodoBase, j)->numero;
                        nodobuscar(nodoBase, j)->numero = nodobuscar(nodoBase, k)->numero;
                        nodobuscar(nodoBase, k)->numero = temp;
                        j -= intervalo;
                    }
                }
            }
            intervalo = intervalo / 2;
        }
    }

    void ordenShellVector(int a[])
    {   
        int n = this->cantidad;
        int intervalo, i, j, k;

        intervalo = n / 2;

        while (intervalo > 0)
        {
            for (i = intervalo; i < n; i++)
            {
                j = i - intervalo;
                while (j >= 0)
                {
                    k = j + intervalo;
                    if (a[j] <= a[k]) j = -1;
                    else
                    {
                        int temp;
                        temp = a[j];
                        a[j] = a[k];
                        a[k] = temp;
                        j -= intervalo;
                    }
                }
            }
            intervalo = intervalo / 2;
        }
    }
    /*------------------------------------------------------------------------------------------------------------------
    * Algoritmos de ordenamiento mediante intercambio
    * 1) Con punteros p
    * 2) Con vectores
    *---------------------------------------------------------------------------------------------------------------------
    */
    void ordIntercambioPuntero(nodo* a) {
        int n = this->cantidad;
        int i, j;
        nodo* nodoBase = base(a);
        for (i = 0; i <= n - 2; i++) {
            for (j = i + 1; j <= n - 1; j++) {
                if (nodobuscar(nodoBase, i)->numero > nodobuscar(nodoBase, j)->numero) {
                    double aux;
                    aux = nodobuscar(nodoBase, i)->numero;
                    nodobuscar(nodoBase, i)->numero = nodobuscar(nodoBase, j)->numero;
                    nodobuscar(nodoBase, j)->numero = aux;
                }
            }
        }
    }
    void ordIntercambioVector(int a[]) {
        int n = this->cantidad;
        int i, j;

        for (i = 0; i <= n - 2; i++) {
            for (j = i + 1; j <= n - 1; j++) {
                if (a[i] > a[j]) {
                    int aux;
                    aux = a[i];
                    a[i] = a[j];
                    a[j] = aux;
                }
            }
        }
    }
    /*------------------------------------------------------------------------------------------------------------------
    * Algoritmos de ordenamiento mediante MergeSort
    * 1) Con punteros p
    * 2) Con vectores
    *---------------------------------------------------------------------------------------------------------------------
    */
    /*------------------------------------------------------------------------------------------------------------------
    * Algoritmos de ordenamiento mediante Binsort
    * 1) Con punteros p
    * 2) Con vectores
    *---------------------------------------------------------------------------------------------------------------------
    */
    /*------------------------------------------------------------------------------------------------------------------
    * Algoritmos de ordenamiento mediante radixSort
    * 1) Con punteros p
    * 2) Con vectores
    *---------------------------------------------------------------------------------------------------------------------
    */





};


#endif //PRUEBASPROYECTO_ORDENAMIENTO_H
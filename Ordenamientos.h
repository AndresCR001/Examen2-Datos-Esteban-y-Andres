#pragma once
#include "nodo.h"
#include "Lista.h"
#include <algorithm>
#include <vector>

class Ordenamiento {

public:
    int cantidad; //cambiar esto por 70millones

    /*
     * Cada algoritmo implementado con vectores funciona igual que como las implementaciones con punteros
     * Lo que cambia es lo de nodobuscar que es como una forma de buscar el nodo dependiendo del índice que le entra
     * */
     /*------------------------------------------------------------------------------------------------------------------
      * Algoritmos de ordenamiento mediante burbuja                             Funciona
      * 1) Con punteros p
      * 2) Con vectores
      *------------------------------------------------------------------------------------------------------------------
      */
    Ordenamiento(int pcantidad) {
        this->cantidad = pcantidad;
    }
    void bubblesortPuntero(nodo* a) {

        double n = this->cantidad; //Será la cantidad de repeticiones que hará el ciclo
        int interruptor = 1;
        int pasada, j;
        for (pasada = 0; pasada < n - 1 && interruptor; pasada++)
        {
            nodo* nodoJ = a;
            for (j = 0; j < n - pasada - 1; j++) {
                if (nodoJ->numero > nodoJ->siguiente->numero) { //si el número de actual es mayor al número del siguiente
                    long aux;
                    interruptor = 1;
                    aux = nodoJ->numero; //num actual almacenelo en la variable aux para no perderlo
                    nodoJ->numero = nodoJ->siguiente->numero; //el número del siguiente paselo a actual
                    nodoJ->siguiente->numero = aux;//el valor de aux(numero del nodo actual que fue asignado antes)
                }
                nodoJ = nodoJ->siguiente; //pasa al siguiente para recorrerlo
            }
        }
    }
    void bubblesortVector(int a[]) { // ordenamiento por vector
        /*unsigned t0, t1;
        t0=clock();//determino un punto de inicio para el reloj
         */
        double n = cantidad;
        int interruptor = 1;
        int pasada, j;

        for (pasada = 0; pasada < n - 1 && interruptor; pasada++)
        {

            for (j = 0; j < n - pasada - 1; j++)
                if (a[j] > a[j + 1]) //si el actual es mayor al siguiente
                {
                    long aux;
                    interruptor = 1;
                    aux = a[j];//almacene en aux para no perder el valor
                    a[j] = a[j + 1];
                    a[j + 1] = aux;
                }
        }
        /*
        t1 = clock();//punto final del reloj
        double time = (double(t1-t0)/CLOCKS_PER_SEC);//convierto a segundos
        return time;//retorno el tiempo en segundos
         */
    }
    /*------------------------------------------------------------------------------------------------------------------
   * Algoritmos de ordenamiento mediante selección
   * 1) Con punteros p                                                             FUNCIONA
   * 2) Con vectores
     * ----------------------------------------------------------------------------------------------------------------
   */

    void ordenSeleccionPuntero(nodo* a)
    {
        int n = this->cantidad;
        int indiceMenor, i, j;
        for (i = 0; i <= n - 1; i++) {
            indiceMenor = i;
            for (j = i + 1; j < n; j++) {
                if (nodobuscar(a, j)->numero > nodobuscar(a, indiceMenor)->numero) indiceMenor = j;
                //nodo buscar es una funcion diseñada que funciona como un indice de un arreglo
                //me busca al valor del índice y paso el primer valor como parámetro
            }
            if (i != indiceMenor) {
                int aux = nodobuscar(a, i)->numero;  //realmente nodobuscar funciona como el sistema de índices de un arreglo
                nodobuscar(a, i)->numero = nodobuscar(a, indiceMenor)->numero;
                nodobuscar(a, indiceMenor)->numero = aux;
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
  * 1) Con punteros                                                     FUNCIONA
  * 2) Con vectores
  *---------------------------------------------------------------------------------------------------------------------
  */
    void ordenInsercionVectorPuntero(nodo* a)
    {
        int n = this->cantidad;
        int i, j;
        int aux;

        for (i = 1; i < n; i++)
        {
            j = i;
            aux = nodobuscar(a, i)->numero;

            while (j > 0 && aux < nodobuscar(a, j - 1)->numero)
            {
                nodobuscar(a, j)->numero = nodobuscar(a, j - 1)->numero;
                j--;

            }
            nodobuscar(a, j)->numero = aux;
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
    * 1) Con punteros p                                                 FUNCIONA
    * 2) Con vectores
    *---------------------------------------------------------------------------------------------------------------------
    */

    void quickSortPuntero(nodo* a, int primero, int ultimo)  //int primero= 0, int ultimo = 70 000 000 -1
    {

        int i, j, central;
        double pivote;
        nodo* nodoA = a;
        central = (primero + ultimo) / 2; //)((int)(primero + ultimo)/2
        pivote = nodobuscar(a, central)->numero;
        i = primero;
        j = ultimo;

        do {
            while (nodobuscar(a, i)->numero < pivote) i++;
            while (nodobuscar(a, j)->numero > pivote) j--;

            if (i <= j)
            {
                double tmp;
                tmp = nodobuscar(a, i)->numero;
                nodobuscar(a, i)->numero = nodobuscar(a, j)->numero;
                nodobuscar(a, j)->numero = tmp;
                i++;
                j--;
            }
        } while (i <= j);

        if (primero < j) quickSortPuntero(a, primero, j);
        if (i < ultimo) quickSortPuntero(a, i, ultimo);

    }

    void quickSortVector(int a[], int primero, int ultimo)  //int primero= 0, int ultimo = 70 000 000 -1
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
    * 1) Con punteros p                                                          FUNCIONA
    * 2) Con vectores
    *---------------------------------------------------------------------------------------------------------------------
    */
    void ordenShellPuntero(nodo* a)
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
                    if (nodobuscar(a, j)->numero <= nodobuscar(a, k)->numero) j = -1;
                    else
                    {
                        double temp;
                        temp = nodobuscar(a, j)->numero;
                        nodobuscar(a, j)->numero = nodobuscar(a, k)->numero;
                        nodobuscar(a, k)->numero = temp;
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
                        double temp;
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
    * 1) Con punteros p                                                         FUNCIONA
    * 2) Con vectores
    *---------------------------------------------------------------------------------------------------------------------
    */
    void ordIntercambioPuntero(nodo* a) {
        int n = this->cantidad;
        int i, j;
        for (i = 0; i <= n - 2; i++) {
            for (j = i + 1; j <= n - 1; j++) {
                if (nodobuscar(a, i)->numero > nodobuscar(a, j)->numero) {
                    int aux;
                    aux = nodobuscar(a, i)->numero;
                    nodobuscar(a, i)->numero = nodobuscar(a, j)->numero;
                    nodobuscar(a, j)->numero = aux;
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
    * 1) Con punteros p                                                      FUNCIONA
    * 2) Con vectores
    *---------------------------------------------------------------------------------------------------------------------
    */
    void mergePuntero(nodo* a, int l, int m, int r)
    {
        int n1 = m - l + 1;
        int n2 = r - m;
        vector<int> L(n1);
        vector<int> R(n2);
        for (int i = 0; i < n1; i++)
            L[i] = nodobuscar(a, l + i)->numero;
        for (int j = 0; j < n2; j++)
            R[j] = nodobuscar(a, m + 1 + j)->numero;
        int i = 0;
        int j = 0;
        int k = l;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                nodobuscar(a, k)->numero = L[i];
                i++;
            }
            else {
                nodobuscar(a, k)->numero = R[j];
                j++;
            }
            k++;
        }
        while (i < n1) {
            nodobuscar(a, k)->numero = L[i];
            i++;
            k++;
        }
        while (j < n2) {
            nodobuscar(a, k)->numero = R[j];
            j++;
            k++;
        }
    }
    void ordenmergesortPuntero(nodo* a, int l, int r) {// l is for left index and r is right index of the sub-array
        if (l >= r) {
            return;//returns recursively
        }
        int m = l + (r - l) / 2;
        ordenmergesortPuntero(a, l, m);
        ordenmergesortPuntero(a, m + 1, r);
        mergePuntero(a, l, m, r);
    }


    void merge(int arr[], int l, int m, int r)
    {
        int n1 = m - l + 1;
        int n2 = r - m;
        vector<int> L(n1);
        vector<int> R(n2);
        for (int i = 0; i < n1; i++)
            L[i] = arr[l + i];
        for (int j = 0; j < n2; j++)
            R[j] = arr[m + 1 + j];
        int i = 0;

        int j = 0;

        int k = l;

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            }
            else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }
        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    void ordenmergesortVector(int arr[], int l, int r) {// l is for left index and r is right index of the sub-array
        if (l >= r) {
            return;//returns recursively
        }
        int m = l + (r - l) / 2;
        ordenmergesortVector(arr, l, m);
        ordenmergesortVector(arr, m + 1, r);
        merge(arr, l, m, r);
    }
    /*------------------------------------------------------------------------------------------------------------------
    * Algoritmos de ordenamiento mediante Binsort
    * 1) Con punteros p
    * 2) Con vectores
    *---------------------------------------------------------------------------------------------------------------------
    */
    void binSortPuntero(nodo* a) {
        // 1) Create n empty buckets
        int n = CANTIDAD;
        vector<int> b[CANTIDAD];
        for (int i = 0; i < n; i++) {
            int bi = n * nodobuscar(a, i)->numero; // Index in bucket
            b[bi].push_back(nodobuscar(a, i)->numero);
        }
        // 3) Sort individual buckets
        for (int i = 0; i < n; i++)
            sort(b[i].begin(), b[i].end());
        // 4) Concatenate all buckets into arr[]
        int index = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < b[i].size(); j++)
                nodobuscar(a, index++)->numero = b[i][j];
    }
        
    void binSortVector(int arr[])
    {
        int n = CANTIDAD;
        // 1) Create n empty buckets
        vector<float> b[CANTIDAD];

        // 2) Put array elements
        // in different buckets
        for (int i = 0; i < n; i++) {
            int bi = n * arr[i]; // Index in bucket
            b[bi].push_back(arr[i]);
        }

        // 3) Sort individual buckets
        for (int i = 0; i < n; i++)
            sort(b[i].begin(), b[i].end());

        // 4) Concatenate all buckets into arr[]
        int index = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < b[i].size(); j++)
                arr[index++] = b[i][j];
    }

    /*------------------------------------------------------------------------------------------------------------------
    * Algoritmos de ordenamiento mediante radixSort
    * 1) Con punteros p
    * 2) Con vectores
    *---------------------------------------------------------------------------------------------------------------------
    */
    int getMaxPuntero(nodo* a, int n) {
        int mx = nodobuscar(a, 0)->numero;
        for (int i = 1; i < n; i++)
            if (nodobuscar(a, i)->numero > mx)
                mx = nodobuscar(a, i)->numero;
        return mx;
    }
    // A function to do counting sort of arr[] according to
    // the digit represented by exp.
    void countSortPuntero(nodo* a, int n, int exp) {
        vector<int> output(n);; // output array
        int i, count[10] = { 0 };

        // almacena las ocurrencias en count
        for (i = 0; i < n; i++)
            count[(nodobuscar(a, i)->numero / exp) % 10]++;

        // Change count[i] so that count[i] now contains actual
        //  position of this digit in output[]
        for (i = 1; i < 10; i++)
            count[i] += count[i - 1];

        // Build the output array
        for (i = n - 1; i >= 0; i--) {
            output[count[(nodobuscar(a, i)->numero / exp) % 10] - 1] = nodobuscar(a, i)->numero;
            count[(nodobuscar(a, i)->numero / exp) % 10]--;
        }

        // Copy the output array to arr[], so that arr[] now
        // contains sorted numbers according to current digit
        for (i = 0; i < n; i++)
            nodobuscar(a, i)->numero = output[i];
    }

    // The main function to that sorts arr[] of size n using
    // Radix Sort
    void radixsortPuntero(nodo* a, int n) {
        // Find the maximum number to know number of digits
        int m = getMaxPuntero(a, n);

        // Do counting sort for every digit. Note that instead
        // of passing digit number, exp is passed. exp is 10^i
        // where i is current digit number
        for (int exp = 1; m / exp > 0; exp *= 10)
            countSortPuntero(a, n, exp);
    }

    int getMax(int arr[], int n)
    {
        int mx = arr[0];
        for (int i = 1; i < n; i++)
            if (arr[i] > mx)
                mx = arr[i];
        return mx;
    }
    void countSort(int arr[], int n, int exp)
    {
        vector<int> output(n); // output array
        int i, count[10] = { 0 };

        // Store count of occurrences in count[]
        for (i = 0; i < n; i++)
            count[(arr[i] / exp) % 10]++;

        // Change count[i] so that count[i] now contains actual
        //  position of this digit in output[]
        for (i = 1; i < 10; i++)
            count[i] += count[i - 1];

        // Build the output array
        for (i = n - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }

        // Copy the output array to arr[], so that arr[] now
        // contains sorted numbers according to current digit
        for (i = 0; i < n; i++)
            arr[i] = output[i];
    }

    // The main function to that sorts arr[] of size n using
    // Radix Sort
    void radixsortVector(int arr[], int n)
    {
        // Find the maximum number to know number of digits
        int m = getMax(arr, n);

        // Do counting sort for every digit. Note that instead
        // of passing digit number, exp is passed. exp is 10^i
        // where i is current digit number
        for (int exp = 1; m / exp > 0; exp *= 10)
            countSort(arr, n, exp);
    }
    // A utility function to print an array
};
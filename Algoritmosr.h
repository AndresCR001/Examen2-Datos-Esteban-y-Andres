#pragma once
#include <iostream> 
#include <ctime>     //librería para medir el tiempo

//algoritmos de ordenacion básicos (selección, interseción, burbuja)
//creamos un ordenamiento de los siguientes programas para el desarrollo del quiz6

#define N 10     
using namespace std;
//declaracion de funciones para el ordenamiento de un arreglo
void ordenSeleccion(double a[], int n);

void ordenInsercion(int a[], int n);

void ordenBurbuja(long a[], int n);

void ordenBurbuja2(long a[], int n);

void ordenShell(double a[], int n);

void quickSort(double a[], int primero, int ultimo);


void entradaListaInt(int a[], int n);
void imprimirListaInt(int a[], int n);

void entradaListaLong(long a[], int n);
void imprimirListaLong(long a[], int n);

void entradaListaDouble(double a[], int n);
void imprimirListaDouble(double a[], int n);

int main() {

    int n;
    int arreglo[N];
    long arregloL[N];
    double arregloD[N];

    //Proceso para recoleccion e impresion de datos del ordenamiento seleccion 
    cout << "\nOrdenamiento por Seleccion" << endl;
    do {
        cout << "\nIntroduzca el número de elementos para el arreglo: ";
        cin >> n;
    } while ((n < 1) && (n > N));

    entradaListaDouble(arregloD, n);

    cout << "\nLista original de " << n << " elementos";
    imprimirListaDouble(arregloD, n);

    ordenSeleccion(arregloD, n);

    cout << "\nLista ordenada de " << n << " elementos";
    imprimirListaDouble(arregloD, n);

    //Proceso para recoleccion e impresion de datos del ordenamiento spor Insercion 
    cout << "\nOrdenamiento por Inserción" << endl;
    do {
        cout << "\nIntroduzca el número de elementos para el arreglo : ";
        cin >> n;
    } while ((n < 1) && (n > N));

    entradaListaInt(arreglo, n);

    cout << "\nLista original de " << n << " elementos";
    imprimirListaInt(arreglo, n);

    ordenInsercion(arreglo, n);

    cout << "\nLista ordenada de " << n << " elementos";
    imprimirListaInt(arreglo, n);

    //Proceso para recoleccion e impresion de datos del ordenamiento Burbuja método #1
    cout << "\nOrdenamiento por Burbuja" << endl;
    do {
        cout << "\nIntroduzca el número de elementos para el arreglo tipo long: ";
        cin >> n;
    } while ((n < 1) && (n > N));

    entradaListaLong(arregloL, n);

    cout << "\nLista original de " << n << " elementos";
    imprimirListaLong(arregloL, n);

    ordenBurbuja(arregloL, n);

    cout << "\nLista ordenada de " << n << " elementos";
    imprimirListaLong(arregloL, n);

    //Proceso para recoleccion e impresion de datos del ordenamiento por burbuja método #2
    cout << "\nOrdenamiento por Burbuja2" << endl;
    do {
        cout << "\nIntroduzca el número de elementos para el areglo tipo long: ";
        cin >> n;
    } while ((n < 1) && (n > N));

    entradaListaLong(arregloL, n);

    cout << "\nLista original de " << n << " elementos";
    imprimirListaLong(arregloL, n);

    ordenBurbuja2(arregloL, n);

    cout << "\nLista ordenada de " << n << " elementos";
    imprimirListaLong(arregloL, n);


    //Proceso para recoleccion e impresion de datos del ordenamiento Shell
    cout << "\nOrdenamiento por Shell" << endl;
    do {
        cout << "\nIntroduzca el número de elementos para el areglo tipo double: ";
        cin >> n;
    } while ((n < 1) && (n > N));

    entradaListaDouble(arregloD, n);

    cout << "\nLista original de " << n << " elementos";
    imprimirListaDouble(arregloD, n);

    ordenShell(arregloD, n);

    cout << "\nLista ordenada de " << n << " elementos";
    imprimirListaDouble(arregloD, n);


    //Proceso para recoleccion e impresion de datos del ordenamiento Quick Sort 
    cout << "\nOrdenamiento por Quick Sort" << endl;
    do {
        cout << "\nIntroduzca el número de elementos para el areglo tipo double: ";
        cin >> n;
    } while ((n < 1) && (n > N));

    entradaListaDouble(arregloD, n);

    cout << "\nLista original de " << n << " elementos";
    imprimirListaDouble(arregloD, n);

    quickSort(arregloD, 0, 10);

    cout << "\nLista ordenada de " << n << " elementos";
    imprimirListaDouble(arregloD, n);


    return 0;
}

void ordenSeleccion(double a[], int n)
{
    int indiceMenor, i, j;

    for (i = 0; i <= n - 1; i++) {
        indiceMenor = i;

        for (j = i + 1; j < n; j++)

            if (a[j] > a[indiceMenor]) indiceMenor = j;

        if (i != indiceMenor)
        {
            double aux = a[i];
            a[i] = a[indiceMenor];
            a[indiceMenor] = aux;

        }
    }
}

void ordenInsercion(int a[], int n)
{
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

void ordenBurbuja(long a[], int n)
{
    int interruptor = 1;
    int pasada, j;

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

void ordenBurbuja2(long a[], int n)
{
    int i, j;
    int indiceIntercambio;

    i = n - 1;

    while (i > 0)
    {
        indiceIntercambio = 0;
        for (j = 0; j < i; j++)
            if (a[j + 1] < a[j])
            {
                long aux;
                a[j] = a[j + 1];
                a[j + 1] = aux;
                indiceIntercambio = j;

            }
        i = indiceIntercambio;
    }
}

void ordenShell(double a[], int n)
{
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

void quickSort(double a[], int primero, int ultimo)
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

    if (primero < j) quickSort(a, primero, j);
    if (i < ultimo) quickSort(a, i, ultimo);
}

void imprimirListaInt(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        char c;
        c = (i % 10 == 0) ? '\n' : ' ';
        cout << c << " " << a[i] << endl;
    }
}
void entradaListaInt(int a[], int n)
{
    int i;
    cout << "\n Entrada de los elementos (enteros) \n" << endl;
    for (i = 0; i < n; i++)
    {

        cout << "a[" << i + 1 << "] = ";
        cin >> a[i];

    }

}


void entradaListaLong(long a[], int n)
{
    int i;
    cout << "\n Entrada de los elementos (enteros) \n" << endl;
    for (i = 0; i < n; i++)
    {

        cout << "a[" << i + 1 << "] = ";
        cin >> a[i];

    }

}
void imprimirListaLong(long a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        char c;
        c = (i % 10 == 0) ? '\n' : ' ';
        cout << c << " " << a[i] << endl;
    }
}


void entradaListaDouble(double a[], int n)
{
    int i;
    cout << "\n Entrada de los elementos (decimales)\n" << endl;
    for (i = 0; i < n; i++)
    {

        cout << "a[" << i + 1 << "] = ";
        cin >> a[i];

    }

}
void imprimirListaDouble(double a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        char c;
        c = (i % 10 == 0) ? '\n' : ' ';
        cout << c << " " << a[i] << endl;
    }
}
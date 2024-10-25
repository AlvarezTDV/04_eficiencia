#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std; 

// Función para generar un arreglo ordenado de números enteros
void generarArreglo(int* arreglo, int tamano) {
    for (int i = 0; i < tamano; i++) {
        arreglo[i] = i;
    }
}

// Función para buscar un elemento en un arreglo utilizando búsqueda binaria
int busquedaBinaria(int* arreglo, int tamano, int objetivo) {
    int izquierda = 0;
    int derecha = tamano - 1;
    while (izquierda <= derecha) {
        int medio = (izquierda + derecha) / 2;
        if (arreglo[medio] == objetivo) {
            return medio;
        } else if (arreglo[medio] < objetivo) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }
    return -1; // Elemento no encontrado
}

// Función para buscar un elemento en un arreglo utilizando búsqueda secuencial
int busquedaSecuencial(int* arreglo, int tamano, int objetivo) {
    int i = 1;
    while (i <= tamano && arreglo[i-1] < objetivo) {
        i++;
    }
    if (i <= tamano && arreglo[i-1] == objetivo) {
        return i-1;
    } else {
        return -1;
    }
}

int main() {
    int opcion;
    int tamanoArreglo;
    int cantidadBusquedas;
    int* arreglo;

    do {
        cout << "Menu de busqueda" << endl;
        cout << "1. Búsqueda binaria" << endl;
        cout << "2. Búsqueda secuencial" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        if (opcion == 1 || opcion == 2) {
            cout << "Ingrese la cantidad de datos que se van a generar de forma ordenada: ";
            cin >> tamanoArreglo;

            arreglo = new int[tamanoArreglo];
            generarArreglo(arreglo, tamanoArreglo);

            cout << "Ingrese la cantidad de datos que se van a buscar aleatoreamente: ";
            cin >> cantidadBusquedas;

            clock_t tiempoInicio;
            clock_t tiempoFin;

            if (opcion == 1) {
                cout << "Búsqueda binaria" << endl;
                tiempoInicio = clock();
                for (int i = 0; i < cantidadBusquedas; i++) {
                    int objetivo = rand() % tamanoArreglo;
                    busquedaBinaria(arreglo, tamanoArreglo, objetivo);
                }
                tiempoFin = clock();
            } else if (opcion == 2) {
                cout << "Búsqueda secuencial" << endl;
                tiempoInicio = clock();
                for (int i = 0; i < cantidadBusquedas; i++) {
                    int objetivo = rand() % tamanoArreglo;
                    busquedaSecuencial(arreglo, tamanoArreglo, objetivo);
                }
                tiempoFin = clock();
            }

            double tiempoEjecucion = (double)(tiempoFin - tiempoInicio) / CLOCKS_PER_SEC;
            cout << "Tiempo de ejecución: " << tiempoEjecucion << " segundos" << endl;

            delete[] arreglo;
        } else if (opcion != 3) {
            cout << "Opción inválida" << endl;
        }
    } while (opcion != 3);

    return 0;
}
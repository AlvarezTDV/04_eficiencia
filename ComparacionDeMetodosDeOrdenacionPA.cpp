#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <chrono>
using namespace std;

void ingresarDatosArreglo( int[], int[], int );
void insercionBinaria( int[], int );
void metodoShell( int[], int );

int main() {
	srand(time(NULL));
	cout << "Semilla inicializada" << endl << endl;
	
	int opcion1, opcion2, opcion3;
	int arregloPrincipal[200000];
	int arreglo1[1000];
	int arreglo2[10000];
	int arreglo3[100000];
	int arreglo4[200000];
	
	/*
	for ( int i = 0; i < 200000; i++ ) {
		arregloPrincipal[i] = 200000 - i;
	}
	*/
	
	//SE GENERA UN ARREGLO DE 200 000 ELEMENTOS
	for ( int i = 0; i < 200000; i++ ) {
		arregloPrincipal[i] = rand() % (200000 + 1);
	}

	do {
		cout << "// ESCOGE UN METODO DE ORDENACION //" << endl << endl;
		cout << "1. Insercion binaria" << endl;
		cout << "2. Metodo de shell" << endl;
		cout << "3. Salir del programa" << endl;
		cin >> opcion1;
		
		switch ( opcion1 ) {
			case 1:
				do {
					cout << "// ESCOGE LA CANTIDAD DE ELEMENTOS //" << endl << endl;
					cout << "1. 1000 elementos" << endl;
					cout << "2. 10000 elementos" << endl;
					cout << "3. 100000 elementos" << endl;
					cout << "4. 200000 elementos" << endl;
					cout << "5. Salir del menu" << endl;
					cin >> opcion2;
					
					switch ( opcion2 ) {
						case 1:
                            ingresarDatosArreglo(arregloPrincipal, arreglo1, 1000);
                            {
                                auto start = chrono::high_resolution_clock::now();
                                insercionBinaria(arreglo1, 1000);
                                auto end = chrono::high_resolution_clock::now();
                                chrono::duration<double> duration = end - start;
                                cout << fixed << setprecision(10);
                                cout << "Tiempo de ejecucion Insercion Binaria: " << duration.count() << " segundos" << endl;
                            }
                            break;
                        case 2:
                            ingresarDatosArreglo(arregloPrincipal, arreglo2, 10000);
                            {
                                auto start = chrono::high_resolution_clock::now();
                                insercionBinaria(arreglo2, 10000);
                                auto end = chrono::high_resolution_clock::now();
                                chrono::duration<double> duration = end - start;
                                cout << fixed << setprecision(10);
                                cout << "Tiempo de ejecucion Insercion Binaria: " << duration.count() << " segundos" << endl;
                            }
                            break;
                        case 3:
                            ingresarDatosArreglo(arregloPrincipal, arreglo3, 100000);
                            {
                                auto start = chrono::high_resolution_clock::now();
                                insercionBinaria(arreglo3, 100000);
                                auto end = chrono::high_resolution_clock::now();
                                chrono::duration<double> duration = end - start;
                                cout << fixed << setprecision(10);
                                cout << "Tiempo de ejecucion Insercion Binaria: " << duration.count() << " segundos" << endl;
                            }
                            break;
                        case 4:
                            ingresarDatosArreglo(arregloPrincipal, arreglo4, 200000);
                            {
                                auto start = chrono::high_resolution_clock::now();
                                insercionBinaria(arreglo4, 200000);
                                auto end = chrono::high_resolution_clock::now();
                                chrono::duration<double> duration = end - start;
                                cout << fixed << setprecision(10);
                                cout << "Tiempo de ejecucion Insercion Binaria: " << duration.count() << " segundos" << endl;
                            }
                            break;
						case 5:
							cout << "Saliendo del menu ..." << endl << endl;
							break;
						default:
							cout << "Error: Ingreso un numero invalido" << endl;
							break;
					}
				} while ( opcion2 != 5 );
				break;
			case 2:
				do {
					cout << "// ESCOGE LA CANTIDAD DE ELEMENTOS //" << endl << endl;
					cout << "1. 1000 elementos" << endl;
					cout << "2. 10000 elementos" << endl;
					cout << "3. 100000 elementos" << endl;
					cout << "4. 200000 elementos" << endl;
					cout << "5. Salir del menu" << endl;
					cin >> opcion3;
					
					switch ( opcion3 ) {
						case 1:
							ingresarDatosArreglo(arregloPrincipal, arreglo1, 1000);
							{
                                auto start = chrono::high_resolution_clock::now();
                                metodoShell(arreglo1, 1000);
                                auto end = chrono::high_resolution_clock::now();
                                chrono::duration<double> duration = end - start;
                                cout << fixed << setprecision(10);
                                cout << "Tiempo de ejecucion Metodo Shell: " << duration.count() << " segundos" << endl;
                            }
							break;
						case 2:
							ingresarDatosArreglo(arregloPrincipal, arreglo2, 10000);
							{
                                auto start = chrono::high_resolution_clock::now();
                                metodoShell(arreglo2, 10000);
                                auto end = chrono::high_resolution_clock::now();
                                chrono::duration<double> duration = end - start;
                                cout << fixed << setprecision(10);
                                cout << "Tiempo de ejecucion Metodo Shell: " << duration.count() << " segundos" << endl;
                            }
							break;
						case 3:
							ingresarDatosArreglo(arregloPrincipal, arreglo3, 100000);
							{
                                auto start = chrono::high_resolution_clock::now();
                                metodoShell(arreglo3, 100000);
                                auto end = chrono::high_resolution_clock::now();
                                chrono::duration<double> duration = end - start;
                                cout << fixed << setprecision(10);
                                cout << "Tiempo de ejecucion Metodo Shell: " << duration.count() << " segundos" << endl;
                            }
							break;
						case 4:
							ingresarDatosArreglo(arregloPrincipal, arreglo4, 200000);
							{
                                auto start = chrono::high_resolution_clock::now();
                                metodoShell(arreglo4, 200000);
                                auto end = chrono::high_resolution_clock::now();
                                chrono::duration<double> duration = end - start;
                                cout << fixed << setprecision(10);
                                cout << "Tiempo de ejecucion Metodo Shell: " << duration.count() << " segundos" << endl;
                            }
							break;
						case 5:
							cout << "Saliendo del menu ..." << endl << endl;
							break;
						default:
							cout << "Error: Ingreso un numero invalido" << endl;
							break;
					}
				} while ( opcion3 != 5 );
				break;
			case 3:
				cout << "Saliendo del programa ..." << endl;
				break;
			default:
				cout << "Error: Ingreso un numero invalido" << endl;
				break;
		}
	} while ( opcion1 != 3 );
	
	return 0;
}

//FUNCION PARA COPIAR LOS DATOS DEL ARREGLO ORIGINAL A UN ARREGLO COPIA
void ingresarDatosArreglo( int arreglo1[], int arreglo2[], int capacidad ) {
	for ( int i = 0; i < capacidad; i++ ) {
		arreglo2[i] = arreglo1[i];
	}
}

//FUNCION INSERCION: INSERCION BINARIA
void insercionBinaria( int arreglo[], int capacidad ) {
	int aux, izq, der, m;
	for ( int i = 1; i < capacidad; i++ ) {
		aux = arreglo[i];
		izq = 0;
		der = i - 1;
		while ( izq <= der ) {
			m = int((izq + der) / 2);
			if ( aux < arreglo[m] ) {
				der = m - 1;
			} else {
				izq = m + 1;
			}
		}
		int j = i - 1;
		while ( j >= izq ) {
			arreglo[j+1] = arreglo[j];
			j = j - 1;
		}
		arreglo[izq] = aux;
	}
}

//FUNCION METODO DE SHELL
void metodoShell( int arreglo[], int capacidad ) {
	int aux, k, i, cen;
	k = capacidad + 1;
	while ( k > 1 ) {
		k = int(k/2);
		cen = 1;
		while ( cen == 1 ) {
			cen = 0;
			i = 0;
			while ( i + k < capacidad ) {
				if ( arreglo[i+k] < arreglo[i] ) {
					aux = arreglo[i];
					arreglo[i] = arreglo[i+k];
					arreglo[i+k] = aux;
					cen = 1;
				}
				i = i + 1;
			}
		}
	}
}

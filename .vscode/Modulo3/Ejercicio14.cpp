#include <iostream>
using namespace std;

int main() {
	
//	Definir las variables.
	
	int M [3] [3], fila, columna;
	int sumaC [100], sumaF [100];
	int suma = 0;
	
//	Pedir al usuario que defina la matriz:
	
	for (fila = 0; fila < 3; fila++){
		
		for ( columna = 0; columna < 3; columna++){
			
			cout << "Escribir las filas a guardar: [" << fila << "] [" << columna << "] "; 
			cin >> M [fila] [columna];
			cout << "\n";
		}
	}
	
//	Mostrar los valores ingresados:

	for ( fila = 0; fila < 3; fila++){
		
		for ( columna = 0; columna < 3; columna++){
			cout << M [fila] [columna];
		}
		cout << "\n";
	}
	
//	Sumar las filas y las columnas.

	for ( fila = 0; fila < 3; fila++){
		suma = 0;
		
		for (columna = 0; columna < 3; columna++){
			
			suma += M [fila] [columna];
		}
		sumaF [fila] = suma;
	}
	
	for ( columna = 0; columna < 3; columna++){
		suma = 0;
		
		for (fila = 0; fila < 3; fila++){
			
			suma += M [fila] [columna];
		}
		sumaC [columna] = suma;
	}
	
//	Muestra los resultados de las sumas:

	for (int i = 0; i < 3; i++){
		
		cout << "\nLa suma de las columnas es: " << sumaC [i];
	}
	
	cout << "\n\n";
	
	for (int i = 0; i < 3; i++){
		
		cout << "\nLa suma de las filas es: " << sumaF [i];
	}
	
	system ("pause");
	return 0;
}

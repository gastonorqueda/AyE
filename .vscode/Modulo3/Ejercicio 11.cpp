#include <iostream>
using namespace std;

int main() {
	
//	Declarar las variables.
	
	int numeros [100];
	int i, j, aux, n;
	
//	Pedir al usuario que ingrese la cantidad de elementos en el vector y sus valores

	cout << "Escribir la cantidad de elementos que va a tener el vector: "; cin >> n;
	
	for (i = 0; i < n; i++){
		cout << "\nEscribir un numero a guardar: ";
		cin >> numeros [i];
	}
	
//	Ordenar el vector

	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if (numeros [j] > numeros [j + 1]){
				aux = numeros [j];
				numeros [j] = numeros [j + 1];
				numeros [j + 1] = aux;
			}
		}
	}
	
//	Mostrar el vector ordenado de forma ascendente:

	cout << "\nOrden ascendente: ";
	for (i = 0; i < n; i++){
		cout << numeros [i] << ", ";
	}
	
	cout << "\n";
	
//	Mostrar el vector de forma descendente: 

	cout << "\nOrden descendente: ";
	for (i = n - 1; i >= 0; i--){
		cout << numeros [i] << ", ";
	}
	
	cout << "\n\n";
	
	system ("pause");
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	
	int v [100];
	int inf, mitad, sup, dato;
	int i, n, j, aux, min;
	char band = 'F';
	
//	Pedir al usuario la cantidad de elementos que se van a guardar en el vector y sus valores, también el numero a buscar.

	cout << "Escribir la cantidad de elementos: "; cin >> n;
	
	for (i = 0; i < n; i++){
		cout << "\nEscribir un valor a guardar: \n";
		cin >> v [i];
	}

//	Ordenar el vector y mostrar como se ordenó.

	for (i = 0; i < n; i++){
		min = i;
		for (j = i + 1; j < n; j++){
			if (v [j] < v [min]){
				min = j;
			}
		}
		
		aux = v [i];
		v [i] = v [min];
		v [min] = aux;
	}
	
	cout << "\nOrden ascendente: \n";
	for (i = 0; i < n; i++){
		cout << v [i] << ", ";
	}
	
		
	cout << "\nEscriba el numero a buscar: "; cin >> dato; 
	cout << "\n";
	
//	Busqueda binaria
	
	inf = 0;
	sup = n;
	
	while (inf <= sup){
		mitad = (inf + sup) / 2;
		
		if (v [mitad] == dato){
			band = 'V';
			break;
		}
		
		if (v [mitad] > dato){
			sup = mitad;
			mitad = (inf + sup) / 2;
		}
		
		if (v [mitad] < dato){
			inf = mitad;
			mitad = (inf + sup) / 2;
		}
	}
	
	if (band == 'V'){
		cout << "\nEl numero se encuentra en la posicion: " << mitad << endl;
	}
	else{
		cout << "\nEl numero no se encuentra en el vactor.";
	}
	
	system ("pause");
	return 0;
}

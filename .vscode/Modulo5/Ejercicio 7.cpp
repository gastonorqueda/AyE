/*
Dada una Pila y dos valores X e Y, desarrollar un procedimiento que reemplace cada
valor igual a X que se encuentre en la pila por el valor Y retornando la pila modificada. En
caso de no haber ningún valor igual a X retornar la pila sin cambio. (Definir parámetros y
codificar).
*/

#include <iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipo de funciones
void pilaOriginal(Nodo *&, int);
void mostrarPilaOriginal(Nodo *);
void mostrarPilaCambiada(Nodo *);
void cambiarValores(Nodo *&, int &, int &);

int main(){
	Nodo *pila = NULL;
	int dato, x, y;
	char rta;
	
	do{
		cout << "Escriba un numero para agregar a la pila: ";
		cin >> dato;
		pilaOriginal(pila, dato);
		cout << "\nDesea agregar otro elemento a la pila? (s/n) ";
		cin >> rta;
	}while(rta == 's' || rta == 'S');
	
	cout << "\n\nMostrar la pila original: \n\n";
	mostrarPilaOriginal(pila);
	
	cout << "\n\n\tCambio de valores: \n\n";
	cout << "Ingresar un valor como referencia: ";
	cin >> x;
	cout << "\n\nIngresar un valor al cual cambiar: ";
	cin >> y;
	cout << endl << endl;
	cambiarValores(pila, x, y);
	
	cout << "\n\nMostrando la pila con valores cambiados: \n\n";
	mostrarPilaCambiada(pila);
	
	return 0;
}

//Definirlas de funciones

void pilaOriginal(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	cout << "\n\tElemento " << n <<" agregado correctamente a la pila";
}

void cambiarValores(Nodo *&pila, int &x, int &y){
	Nodo *aux = pila;
	bool band = false;
	
	while(aux != NULL){
		if(aux->dato == x){
			aux->dato = y;
			band = true;
		}
		aux = aux->siguiente;
	}
	if(band == true){
		cout << "\nElemento cambiado correctamente: ";
	}
	else{
		cout << "\nElemento no cambiado";
		cout << aux->dato;
	}
}

void mostrarPilaCambiada(Nodo *pila){
	while(pila!=NULL){
		if(pila!=NULL){
			cout << pila->dato << " -> ";
		}
		else{
			cout << pila->dato << ".";
		}
		pila = pila->siguiente;
	}
}

void mostrarPilaOriginal(Nodo *pila){
	while(pila!=NULL){
		if(pila!=NULL){
			cout << pila->dato << " -> ";
		}
		else{
			cout << pila->dato << ".";
		}
		pila = pila->siguiente;
	}
}

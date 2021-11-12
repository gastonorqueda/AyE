/*
Dada una cola, imprimirla en orden natural si tiene más de 10 nodos, caso contrario
imprimirla en orden inverso.
*/

#include <iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipo de funciones
void insertarCola(Nodo *&, Nodo *&, int);
bool colaVacia(Nodo *);
void mostrarCola(Nodo *&, Nodo *&);
void colaInvertida(Nodo *&, Nodo *&);

//Variables globales
int cont = 0;

int main(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int dato;
	char rta;
	
	//El usuario elije la cantidad de nodos que debe tener la cola
	do{
		cout << "Ingrese un numero para agregar a la cola: ";
		cin >> dato;
		insertarCola(frente, fin, dato);
		cout << "\n\nDesea agregar otro elemento a la cola? (s/n) ";
		cin >> rta;
	}while(rta == 's' || rta == 'S');
	
	//Mostrando las dos colas
	cout << "\n\n\tMostrar la cola original/invertida: \n";
	mostrarCola(frente, fin);
}

void  insertarCola(Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(colaVacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
}

void mostrarCola(Nodo *&frente, Nodo *&fin){
	Nodo *aux = frente;
	int primero;
	while(aux != NULL){
		cont++;
		aux = aux->siguiente;
	}
	
	//Muestra la cola original, si es que tiene más de 10 nodos
	if(cont > 10){
		cout << "\nCola original: ";
		aux = frente;
		while(aux != NULL){
			cout << aux->dato << " -> ";
			if(aux == NULL){
				cout << aux->dato << ".";
			}
		aux = aux->siguiente;
		}
	}
	else{ //Muestra la cola inversa, si es que tiene menos de 10 nodos
		colaInvertida(frente, fin);
	}
}

void colaInvertida (Nodo *&frente, Nodo *&fin){
	Nodo *aux;
	Nodo *actual = frente;
	Nodo *anterior = NULL;
	Nodo *siguiente = actual ? actual->siguiente : NULL; //si no lo tenemos, se pierde la referencia del nodo siguiente
	fin = frente;
	while(actual){
		actual->siguiente = anterior;
		anterior = actual;
		actual = siguiente;
		siguiente = actual ? actual->siguiente : NULL;
	}
	frente = anterior;
	cout << "\n\nCola invertida: ";
	while (anterior != NULL){
		cout << anterior->dato << " -> ";
		if(anterior == NULL){
			cout << aux->dato << ".";
		}
		anterior = anterior->siguiente;
	}
}

bool colaVacia(Nodo *frente){
	return (frente == NULL)? true : false;
}

/*
Desarrollar un programa que cree una Lista enlazada de inscripciones, deber� invocar el
m�dulo insertarOrdenado() para insertar al menos 4 nodos (cada uno contiene el n�mero de
legajo y c�digo de materia) ordenados por c�digo de materia. Luego desarrollar un
procedimiento e invocarlo en dicho programa, que dada la Lista enlazada de inscripciones,
genere otra lista, que est� ordenada por legajo, con el mismo dise�o.
*/

#include <iostream>
using namespace std;

struct Nodo{
	int legajo, codMateria;
	Nodo *siguiente;
};

// Prototipo de funciones
void insertarOrdenado(Nodo *&, int, int);
void insertarOrdenadoLegajo(Nodo *&, int, int);
void mostrarListaOrdenada(Nodo *);
void mostrarListaOrdenadaLegajo(Nodo *);

int main(){
	Nodo *lista = NULL;
	int legajo, codMateria, opc;
	char rta;
	
	do{
		cout << "Escribir el numero de legajo: "; cin >> legajo; cout << endl << endl;
		cout << "Escribir el codigo de la materia: "; cin >> codMateria; cout << endl << endl;
		insertarOrdenado(lista, legajo, codMateria);
		insertarOrdenadoLegajo(lista, legajo, codMateria);

		cout << "\n\tDesea agregar mas inscripciones? (s/n): "; cin >> rta;
	}while(rta == 's' || rta == 'S');
	
	cout << "\n\n\t1. Mostrar la lista ordenada por el codigo de materia.\n";
	cout << "\n\n\t2. Mostrar la lista ordenada por legajo.\n";
	cout << "\nOpcion: "; cin >> opc; cout << endl << endl;
	
	switch(opc){
		case 1: mostrarListaOrdenada(lista); break;
		
		case 2: mostrarListaOrdenadaLegajo(lista); break;
		
		default: cout << "Ninguna opcion elegida"; break;
	}
	
	system("pause");
	return 0;
}

void insertarOrdenado(Nodo *&lista, int legajo, int materia){
	Nodo *aux1 = lista;
	Nodo *aux2;
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->legajo = legajo;
	nuevo_nodo->codMateria = materia;
	nuevo_nodo->siguiente = NULL;
	
	while((aux1 != NULL) && (aux1->codMateria < materia)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	if(lista == aux1){
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente = nuevo_nodo;
	}
	nuevo_nodo->siguiente = aux1;
}
void insertarOrdenadoLegajo(Nodo *&lista, int legajo, int materia){
	Nodo *aux1 = lista;
	Nodo *aux2;
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->legajo = legajo;
	nuevo_nodo->codMateria = materia;
	nuevo_nodo->siguiente = NULL;
	
	while((aux1 != NULL) && (aux1->legajo < legajo)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	if(lista == aux1){
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente = nuevo_nodo;
	}
	nuevo_nodo->siguiente = aux1;
}
void mostrarListaOrdenada(Nodo *lista){
	Nodo *actual = lista;
	cout << "Lista ordenada por el codigo de materia: ";
	while(actual != NULL){
		cout << actual->codMateria << ", " << actual->legajo << "; ";
		actual = actual->siguiente;
	}
}
void mostrarListaOrdenadaLegajo(Nodo *lista){
	Nodo *actual = lista;
	cout << "Lista ordenada por legajo: ";
	while(actual != NULL){
		cout << actual->legajo << ", " << actual->codMateria << "; ";
		actual = actual->siguiente;
	}
}

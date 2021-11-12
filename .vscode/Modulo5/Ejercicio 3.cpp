#include <iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//prototipos de funcion
void insertarLista (Nodo *&, int);
void mostrarContarLista (Nodo *, int);

//variables globales
int cont = 0;

int main(){
	Nodo *lista = NULL;
	int dato;
	char rta;
	
	//Armado de una Lista con la cantidad de nodos que el usuario quiera
	do{
		cout << "Escribir un numero para agregar a la lista: ";
		cin >> dato;
		insertarLista(lista, dato);
		cout << "\n\nDesea agregar otro nodo? (s/n) ";
		cin >> rta;
	}while(rta == 's' || rta == 'S');
	
	cout << "\nElementos de la lista y cantidad de nodos de la misma:\n";
	mostrarContarLista(lista,cont);
	
	return 0;
}

//Definición de funciones
void insertarLista (Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo;
	Nodo *aux = lista;
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(lista == NULL){ //Si es que la lista esta vacia
		lista = nuevo_nodo; //Agregamos un nuevo nodo al principio de la lista
	}
	else{
		while(aux->siguiente != NULL){ //Recorre la lista
			aux = aux->siguiente; //Avanza posiciones en la lista
		}
		aux->siguiente = nuevo_nodo; //Agrega el nuevo nodo al final de la lista si es que se llegó
	}
	cout << "\nEl elemento " << n << " ah sido agregado correctamente.\n";
}

void mostrarContarLista(Nodo *lista, int cont){
	while(lista != NULL){
		cout << lista->dato << " -> ";
		lista = lista->siguiente;
		cont++; //Añade uno por cada bucle que realiza el while siempre y cuando no sea nula la lista
	}
	cout << "\n\nCantidad de nodos: " << cont << endl << endl;
}

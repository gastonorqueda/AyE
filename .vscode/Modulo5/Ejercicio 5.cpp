/*
Implementar una Lista enlazada donde cada nodo almacena en su campo de información
un número entero. Proceder a insertar elementos en la Lista mediante la invocación de la
función insertarOrdenado() que ordena por criterio ascendente; cargar en la Lista al menos
25 números, luego imprimirlos en pantalla. Pasar los elementos de la Lista a una Pila (por
cada nodo leído en la Lista se deberá hacer un push en la Pila); para finalmente extraerlos
de esta última e imprimirlos por pantalla. ¿Qué puede decir respecto al orden de los
números en cuestión al pasarlos de la Lista a la Pila?.
*/

#include<iostream>
using namespace std;

struct NodoLista{
    int dato;
    NodoLista *siguiente;
};

struct NodoPila{
	int dato;
	NodoPila *siguiente;
};

//Prototipo de funciones
void insertarOrdenado(NodoLista *&, int);
void mostrarLista(NodoLista *);
void mostrarPila(NodoPila *, int);
void pasarElementos(NodoLista *, NodoPila *&);


int main(){
	NodoLista *lista = NULL;
	NodoPila *pila = NULL;
	int dato;
	char rta;
	
	do{
		cout << "Escribir un numero: ";
		cin >> dato;
		insertarOrdenado(lista, dato);
		cout << "\n\tDesea agregar mas numeros? (s/n)";
		cin >> rta;
	}while(rta == 's' || rta == 'S');
	
	
	cout << "\n\n\tSe muestra la lista cargada: ";
	mostrarLista(lista);
	
	cout << "\n\n\tSe pasan los elementos de la lista a la pila: \n\n";
	pasarElementos(lista, pila);
	
	cout << "\n\tSe muestra la pila: ";
	
	mostrarPila(pila, dato);
	NodoPila *aux = pila;
		
	if(pila != NULL){
		cout << aux->dato << ", ";
	}
	else{
		cout << aux->dato << ".";
	}

	
	system("pause");
}

void insertarOrdenado(NodoLista *&lista, int n){
	NodoLista *nuevo_nodo = new NodoLista();
	nuevo_nodo->dato = n;
	NodoLista *aux1 = lista;
	NodoLista *aux2;
	while((aux1 != NULL) && (aux1->dato < n)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	if(lista == NULL){
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente = nuevo_nodo;
	}
	nuevo_nodo->siguiente = aux1;
}

void mostrarLista(NodoLista *lista){
	while(lista != NULL){
		cout << lista->dato << " -> ";
		lista = lista->siguiente;
	}
	if(lista == NULL){
		cout << "." << endl;
	}
}

void mostrarPila(NodoPila *pila, int n){
	NodoPila *aux = pila;
	pila = aux->siguiente;
	delete aux;
}

void pasarElementos(NodoLista *lista, NodoPila *&pila){
	NodoPila *nuevo_nodo = new NodoPila();
	NodoLista *aux = lista;
	while(aux != NULL){
		nuevo_nodo->dato = aux->dato;
		nuevo_nodo->siguiente = pila;
		pila = nuevo_nodo;
		aux = aux->siguiente;
	}
	if(aux == NULL){
		cout << "\tElementos agregados a la pila correctamente.\n";
	}
}

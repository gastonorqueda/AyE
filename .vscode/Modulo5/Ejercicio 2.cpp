/*
Desarrollar un procedimiento que dado un número de legajo y una lista enlazada de
alumnos de un curso, ordenada por legajo, cuyos nodos contienen el número de legajo y
apellido y nombre, elimine al alumno de la lista, y retorne un valor verdadero si ello fue
posible, de lo contrario un valor falso.
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Nodo{
	int legajo;
	string nombre;
	string apellido;
	Nodo *siguiente;
};

//Prototipo de la funcion
void ingresarLista(Nodo *&, string, string, int);
void mostrarAlumnos(Nodo *);
bool eliminarAlumno(Nodo *&, int);

int main(){
	Nodo *lista = NULL;
	int legajo, legajoEliminar;
	string nombre, apellido;
	char rta;
	
	do{
		cout << "Escribir el legajo del alumno: ";
		cin >> legajo;
		cout << "\n\nEscribir el Nombre del alumno: ";
		cin >> nombre;
		cout << "\n\nEscribir el Apellido del alumno: ";
		cin >> apellido; cout << endl << endl;
		ingresarLista(lista, nombre, apellido, legajo);
		cout << "Desea agregar mas alumnos? (s/n): "; cin >> rta;
	}while(rta == 's' || rta == 'S');
	
	cout << "\n\n\tAlumnos en la lista: \n\n";
	mostrarAlumnos(lista);
	
	cout << "\n\nDesea eliminar un alumno de la lista? (s/n): "; cin >> rta;
	if(rta == 's' || rta == 'S'){
		cout << "\n\nEscribir el legajo del alumno el cual desee eliminar de la lista: "; cin >> legajoEliminar;
		if(eliminarAlumno(lista, legajoEliminar)){
			cout << "\n\nAlumno eliminado correctamente.\n";
		}
		else{
			cout << "\n\nEl alumno no ha podido eliminarse correctamente.\n";
		}
	}
	
	system ("pause");
	return 0;
}

void ingresarLista(Nodo *&lista, string nombre, string apellido, int legajo){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux1 = lista;
	Nodo *aux2;
	nuevo_nodo->legajo = legajo;
	nuevo_nodo->nombre = nombre;
	nuevo_nodo->apellido = apellido;
	nuevo_nodo->siguiente = NULL;
	
	while((aux1 != NULL) && (aux1->legajo < legajo)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	if(lista == aux1){ // Se cumple si el elemento a agregar es el primero de la lista
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente = nuevo_nodo;
	}
	nuevo_nodo->siguiente = aux1;
	cout << "\n\nEl alumno "<< nombre <<" "<< apellido << ", de legajo: " << legajo <<", ha sido agregado a la lista correctamente.\n\n";
}

void mostrarAlumnos(Nodo *lista){
	Nodo *actual = lista;
	while(actual != NULL){
		cout << actual->legajo << ", " << actual->nombre << ", " << actual->apellido << "; ";
		actual = actual->siguiente;
	}
}

bool eliminarAlumno(Nodo *&lista, int legajo){
	Nodo *aux = lista;
	Nodo *anterior = NULL;
	if(lista != NULL){
		while((aux != NULL) && (aux->legajo != legajo)){
			anterior = aux;
			aux = aux->siguiente;
		}
		if(aux == NULL){ // Si siempre ingresó al while para que aux sea igual a NULL, no se encontró el alumno
			return false;
		}
		else if(anterior == NULL){ // Significa que el alumno a borrar es el primero de la lista
			lista = lista->siguiente; // Hace que "lista" apunte al "nuevo primer alumno"
			delete aux;
			return true;
		}
		else{ // Si el anterior no es nulo, significa que el alumno a borrar se encuentra en medio de la lista
			anterior->siguiente = aux->siguiente; // Iguala el puntero al siguiente nodo próximo, salteando el alumno que va a ser eliminado de la lista
			delete aux;
			return true;
		}
	}
}

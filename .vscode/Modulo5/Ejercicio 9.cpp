#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo
{
    int info;
    Nodo *sgte;
};

Nodo *obtenerUltimo(Nodo *lista)
{
    while (lista && lista->sgte)
        lista= lista->sgte;
    return lista;
}

void sacarCola(Nodo *&cola,int &n){
	Nodo *aux = cola;
	n = aux->info;
	cola = aux->sgte;
	delete aux;
}

void AgregarNodoAlFinal(Nodo *&lista, int x)
{
    Nodo *paux;
    if (lista)
    {
        paux= obtenerUltimo(lista);
        paux->sgte= new Nodo();
        paux= paux->sgte;
        paux->info= x;
        paux->sgte=NULL;
    }
    else
    {
        lista= new Nodo();
        lista->info=x;
        lista->sgte=NULL;
    }
    return;
}

void queue(Nodo *&cola, int elemento)
{
    AgregarNodoAlFinal(cola,elemento);
}

int main()
{
    Nodo *cola=NULL;
    int x;
    int cantNodo=0;
    int dato;

    do{
		cout << "Ingrese un elemento. Ingrese un valor negativo para finalizar" << endl;
		cin >> x;
		if (x>=0){
			queue(cola,x);
		}
    }while (x>=0);
    
    while(cola != NULL){
		sacarCola(cola,dato);
        
        cantNodo++;
	}

    cout << "La cola tiene " << cantNodo << " nodos." << endl;
}


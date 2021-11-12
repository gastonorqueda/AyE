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

void sacarPila(Nodo *&pila,int &n){
	Nodo *aux = pila;
	n = aux->info;
	pila = aux->sgte;
	delete aux;
}

void push(Nodo *&pila, int elemento)
{
    AgregarNodoAlFinal(pila,elemento);
}

int pop(Nodo *&pila)
{
		int elemento;
        Nodo *anterior, *paux;
        anterior=NULL;
        paux= pila;
        while (paux && paux->sgte)
        {
            anterior = paux;
            paux= paux->sgte;
        }
        if (paux)
        {
            elemento = paux->info;
            delete paux;
            if (anterior!=NULL)
                anterior->sgte=NULL;
            else
                pila =NULL;
            return elemento;
        }
        else
        {
            cout << "ERROR: PILA VACIA." << endl;
            return 0;
        }
}

int main()
{
    Nodo *pila=NULL;
	int aux;
    int dato;
	int x;
    
	do
	{
		cout << "Ingrese un elemento. Ingrese un valor negativo para finalizar" << endl;
		cin >> aux;
		if (aux>=0){
			push(pila,aux);
		}
	} while (aux>=0);
	
    cout << "Ingrese cuantos elementos quiere eliminar" << endl;
	cin >> x;
    
    for (int i = 0; i < x; i++)
	{
		pop(pila);
	};
	

	while(pila != NULL){
		sacarPila(pila,dato);
		
		if(pila != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}

};

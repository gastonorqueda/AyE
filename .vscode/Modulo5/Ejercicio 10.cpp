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

int sacarCola(Nodo *&cola,int &n){
	Nodo *aux = cola;
	n = aux->info;
	cola = aux->sgte;
	delete aux;

    return n;
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
    Nodo *colA=NULL;
    Nodo *colB=NULL;
    Nodo *colAB=NULL;
    int x;
    int a;
    int cantNodo=0;
    int dato;

    cout << "--------------- COLA A ----------------" << endl;
    do{
		cout << "Ingrese un elemento de la Cola A. Ingrese un valor negativo para finalizar" << endl;
		cin >> x;
		if (x>=0){
			queue(colA,x);
		}
    }while (x>=0);
    
    cout << "--------------- COLA B ----------------" << endl;

    do{
		cout << "Ingrese un elemento de la Cola B. Ingrese un valor negativo para finalizar" << endl;
		cin >> x;
		if (x>=0){
			queue(colB,x);
		}
    }while (x>=0);
    
    while(colA != NULL){
		a = sacarCola(colA,dato);
        queue(colAB,a);
	}
    while(colB != NULL){
		a = sacarCola(colB,dato);
        queue(colAB,a);
	}

    cout << "--------------- COLA AB ----------------" << endl;

    while(colAB != NULL){
		sacarCola(colAB,dato);
		
		if(colAB != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}
}
#include <iostream>
using namespace std;
    template <typename T> struct Nodo{
        T info;
        Nodo<T>* sgte;
    };
    template <typename T>
    void push(Nodo<T>*& Pila, T x){
        Nodo<T>* p = new Nodo<T>();
        p ->info = x;
        p->sgte = Pila;
        Pila = p;
        return;
    }
    template <typename T> T pop(Nodo<T>*&Pila){
        T x;
        Nodo<T>* p = Pila;
        x = p ->info;
        Pila = p->sgte;
        delete p;
        return x;
    }
int main(){
    Nodo<int>* pila = NULL;
    Nodo<int>*pila2= NULL;
    int X;
    int I;
    int p=0;
    cout<<"Ingrese el valor X: "<<endl;
    cin>>X;
    cout<<"Ingrese la posicion I: "<<endl;
    cin>>I;
    for (int i=0;i<5;i++){
    	push<int>(pila,i);
    }
	int b;
    while( pila!=NULL ){
		b=pop<int>(pila);
		push<int>(pila2,b);
    }
    while( pila2!=NULL ){
        p++;
        b=pop<int>(pila2);
        if (p==I){
            push<int>(pila,X);
        }else push<int>(pila,b);
    }
	while( pila!=NULL ){
        cout<<"El numero "<< pop<int>(pila)<< " esta en la posición " << p <<endl;
        p--;
    }
}
    

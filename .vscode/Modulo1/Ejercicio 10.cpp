//Dados tres valores enteros y distintos, emitir una leyenda apropiada que informe cuál es el mayor entre ellos, cual es el segundo mayor y cual es el menor.

#include <iostream>
using namespace std;

int main (){
	
	int numero1, numero2, numero3, nMayor, nSegundoMayor, nMenor;
	
	cout<< "Escriba el primer numero: ";
	cin>> numero1;
	
	cout<< "Escriba el segundo numero: ";
	cin>> numero2;
	
	cout<< "Escriba el tercer numero: ";
	cin>> numero3;
	
	if(numero1>numero2){
		nMayor = numero1;
		nMenor = numero2;
	}
	
	else{
		nMayor = numero2;
		nMenor = numero1;
	}
	
	if(nMayor>numero3){
		if(nMenor>numero3){
			nSegundoMayor = nMenor;
			nMenor = numero3;
		}
		
		else{
			nSegundoMayor = numero3;
		}
		
	}
	
	else{
		nSegundoMayor = nMayor;
		nMayor = numero3;
	}
	
	cout << "El mayor numero es: " << nMayor << ", " << "El segundo mayor es: " << nSegundoMayor <<", " << "El menor numero es: " << nMenor << endl;
	
	system("pause");
}

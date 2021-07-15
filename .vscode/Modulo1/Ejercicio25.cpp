#include <iostream>
using namespace std;

main() {
	
	double numero = 0;
	double sumaFinal = 0;
	cout<< "ingrese un numero entero: "<< endl;
	cin>> numero;
	
	for(double i=1; i<numero + 1; i++){
		sumaFinal += 1/i;
	}
	
	cout<< "El resultado final es: "<< sumaFinal<< endl;
	
	system("pause");
	
}

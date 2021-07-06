#include <iostream>
/* Suponiendo que 1 Bitcoin = 25000 dólares. Escribir un programa que pida al usuario un
número de dólares y calcule y muestre en pantalla el cambio en Bitcoin.*/

using namespace std;
main()
{

	double btc = 25000;
	double dolares;

	cout << "Introducir la cantidad de dolares a convertir en btc" << endl;
	cin >> dolares;
	
	double cambio = dolares / btc;
	

	
	cout << "El cambio a btc es: " << cambio << endl;

}

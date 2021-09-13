/*
Dados los siguientes dibujos que corresponden a distintos tipos de registros realice su
declaración en C++, y especifique la nomenclatura para acceder al registro y cada uno de sus campos.
*/

#include <iostream>
using namespace std;

//	Declaracion de las strcut y una anidada.

struct fecha {
	int dia;
	int mes;
	int anio;
};

struct persona {
	char nombre [25];
	struct fecha nacimiento;
} per [2];


int main() {
	
//	Pedir al usuario que ingrese los valores para cada persona.
	
	for (int i = 0; i < 2; i++){
		cout << "\nIngrese el nombre: ";
		cin >> per [i].nombre;
		
		cout << "\nIngrese la fecha de nacimiento: \n";
		cout << "\nDia: "; cin >> per [i].nacimiento.dia;
		cout << "\nMes: "; cin >> per [i].nacimiento.mes;
		cout << "\nAnio: "; cin >> per [i].nacimiento.anio;
	}
	
//	Mostrar por pantalla las struct definidas.
	
	for (int i = 0; i < 2; i++){
		cout << "\n\nNombre: " << per [i].nombre << endl << endl;
		cout << "Dia de nacimiento: " << per [i].nacimiento.dia << endl << endl;
		cout << "Mes de nacimiento: " << per [i].nacimiento.mes << endl << endl;
		cout << "Anio de nacimiento: : " << per [i].nacimiento.anio << endl << endl;
	}
	
	system ("pause");
	return 0;
}

/*
Dado el siguiente dibujo de un registro, especifique la nomenclatura para acceder al registro y
cada uno de sus campos, y las operaciones que se pueden realizar a nivel registro y a nivel campos.
Defina otro registro del mismo tipo de datos, asignar valores iniciales y luego llevar a cabo la
asignacion entre variables del tipo registro o struct.
*/

#include <iostream>
using namespace std;

//	Declaracion del struct

struct alumno {
	int legajo;
	char nombre [25];
	float nota;
} A1;


int main() {
	
//	Como se accede a los registros y los campos para guardarle valores ingresados por teclado:
	
	cout << "Indique el legajo del alumno, su apellido y nota: \n"; 
	cin >> A1.legajo;
	cin >> A1.nombre;
	cin >> A1.nota;
	
//	Como se muestra por pantalla los valores ingresados:

	cout << "\nAlumno de legajo: " << A1.legajo << ", con apellido: " << A1.nombre << ", con su nota: " << A1.nota << endl << endl;
	
	system ("pause");
	return 0;
}

#include <iostream>
using namespace std;


float N1, N2, N3, N4, N5;

float promedio (float N1, float N2, float N3, float N4, float N5){
	float promedio = 0;
	promedio = (N1 + N2 + N3 + N4 + N5) / 5;
	
	return (promedio);
}

int main() {
	
//	Declaro las variables:
	
	char nombre [20];
	char opcion [3];
	
	do {
		
		cout << "Ingrese el nombre del alumno: "; cin >> nombre;
		
		cout << "\n Nota 1: "; cin >> N1;
		cout << "\n Nota 2: "; cin >> N2;
		cout << "\n Nota 3: "; cin >> N3;
		cout << "\n Nota 4: "; cin >> N4;
		cout << "\n Nota 5: "; cin >> N5;
		
		cout << "\nEl promedio de " << nombre << " es: " << promedio (N1, N2, N3, N4, N5);
		
		cout << "\n\nCalcular otro promedio? (si/no)\n";
		cin >> opcion;
	
	} while (opcion [0] == 'S' || opcion [0] == 's');
	

	system ("pause");
	return 0;
}

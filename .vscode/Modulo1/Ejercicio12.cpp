#include <iostream>
/* Dado tres valores determinar e imprimir una leyenda según sea: “Forman triangulo” o
“No forman triángulo”.
¿Qué propiedades tienen los lados de un triángulo?
Un triángulo tiene 6 elementos fundamentales: sus tres vértices A, B y C, y sus tres lados AB, BC y
AC. Los lados del triángulo tienen una propiedad muy interesante: la longitud de cualquiera de sus
lados siempre es menor que la suma de las longitudes de los otros dos lados.
*/

using namespace std;
main()
{

	float ladoA;
	float ladoB;
	float ladoC;

	cout << " Introducir el primer valor" << endl;
	cin >> ladoA;
	cout << " Introducir el segundo valor" << endl;
	cin >> ladoB;
	cout << " Introducir el tercer valor" << endl;
	cin >> ladoC;

	
	if (ladoA < (ladoB + ladoC) && ladoB < (ladoA + ladoC) && ladoC < (ladoA + ladoB))
	{
		cout << "Forman triangulo" << endl;
	}
	else
	{
		cout << "No forman triangulo" << endl;
	}
}

// Dado un número N (<30), genere e informe un vector VEC de N elementos que contenga los
// primeros N números naturales pares.

#include <iostream>
using namespace std;

int tamano;
int tamanoVec = 0;
int posicion = 0;
main()
{
	cout << "Ingrese un numero entero menor que 30" << endl;
	cin >> tamano;

	if (tamano % 2 == 0)
	{
		tamanoVec = tamano / 2;
	}
	else
	{
		tamanoVec = (tamano / 2) + 1;
	}
	int vec[tamanoVec];
	for (int i = 0; i < tamano; i++)
	{
		if (i % 2 == 0)
		{
			vec[posicion] = i;
			posicion++;
		}
	}
	posicion = 0;
	for (int i = 0; i < tamanoVec; i++)
	{
		cout << "Los numeros pares son: "<< vec[posicion] << endl;
		posicion++;
	}
}
// Ingresar un valor entero N (< 30) y a continuación un conjunto de N elementos. Si el último
// elemento del conjunto tiene un valor menor que 10 imprimir los negativos y en caso contrario los
// demás

#include <iostream>
using namespace std;

int tamano;
int elemento;
main()
{
	cout << "Ingrese un numero entero menor que 30" << endl;
	cin >> tamano;
	int vec[tamano];
	for (int pos = 0; pos < tamano; pos++)
	{
		cout << "Ingrese un elemento" << endl;
		cin >> elemento;
		vec[pos] = elemento;
	}

	if (vec[tamano - 1] < 10)
	{
		for (int pos = 0; pos < tamano; pos++)
		{
			if (vec[pos] < 0)
			{
				cout << "El numero es: " << vec[pos] << endl;
			}
		}
	}
	else
	{
		for (int pos = 0; pos < tamano; pos++)
		{
			if (vec[pos] > 0)
			{
				cout << "El numero es: " << vec[pos] << endl;
			}
		}
	}
}
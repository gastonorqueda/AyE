// Ingresar un valor entero N (< 30) y a continuación un conjunto de N elementos. Si el último
// elemento del conjunto tiene un valor menor que 10 imprimir los negativos y en caso contrario los
// demás

#include <iostream>
using namespace std;

int tamano;
main()
{
	cout << "Ingrese un numero entero menor que 30" << endl;
	cin >> tamano;
	int vec[tamano];
	for (int i = 0; i < tamano; i++)
	{
		if (i % 2 == 0)
		{
			vec[posicion] = i;
			posicion++;
		}
	}
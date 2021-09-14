// Dado un conjunto (<100) de valores enteros de los cuales el último es cero y no debe procesarse:
// informe el valor mínimo, su posición dentro del conjunto, si el mínimo no es único, informar todas las
// posiciones donde se encuentre. Informe el producto de los elementos impares que se encuentren en
// posición par.

#include <iostream>
using namespace std;

int conjuntoEntero[] = {10, 2, 3, 6, 5, 7, 8, 9, 10, 2, 2, 12, 0};

main()
{

	int tamanoVec = sizeof conjuntoEntero / sizeof conjuntoEntero[0];
	int posicionesMinimos[tamanoVec];
	int posicionesContador = 0;
	bool minimoUnico = true;
	int posicionUnico = 0;
	int minimo = 0;
	int valorMin = 999999999;
	int producto = 1;

	for (int pos = 0; pos < tamanoVec; pos++)
	{

		if (conjuntoEntero[pos] != 0)
		{
			if (conjuntoEntero[pos] == valorMin)
			{
				minimoUnico = false;
				posicionesMinimos[posicionesContador] = pos;
				posicionesContador++;
			}
			if (conjuntoEntero[pos] < valorMin)
			{
				valorMin = conjuntoEntero[pos];
				posicionUnico = pos;
			}

			if (pos % 2 == 0 && conjuntoEntero[pos] % 2 != 0)
			{
				producto = producto * conjuntoEntero[pos];
			}
		}
	}
	cout << "El producto de los elementos impares que se encuentren en posición par es: " << producto << endl;
	cout << endl;
	if (minimoUnico)
	{
		cout << "El minimo es: " << valorMin << " y su posicion es: " << posicionUnico << endl;
	}
	else
	{
		cout << "El minimo es: " << valorMin << " y sus posiciones son: " << endl;
		cout << posicionUnico << endl;
		for (int pos = 0; pos < posicionesContador; pos++)
		{
			cout << posicionesMinimos[pos] << endl;
		}
	}
}
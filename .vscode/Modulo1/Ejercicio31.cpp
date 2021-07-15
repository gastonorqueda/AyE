/*1 Se dispone de un lote de valores enteros positivos que finaliza con un número negativo.
El lote está dividido en sublotes por medio de valores cero. Desarrollar un programa que
determine e informe:
a) Por cada sublote el promedio de valores.
b) El total de sublotes procesados.
c) El valor máximo del conjunto, indicando en que sublote se encontró y la posición relativa del
mismo dentro del sublote.
d) Valor mínimo de cada sublote.
Nota: el lote puede estar vacío (primer valor negativo), o puede haber uno, varios o todos los
sublotes vacíos (ceros consecutivos).
*/

#include <iostream>

using namespace std;

main()
{

	float promedioTotal;
	int contadorSublotes, maxTotal, subloteMaximo, sumaSublote, pos, posMaximo, minSublote;
	int valor = 1;
	contadorSublotes = 0;
	maxTotal = -1;

	while (valor >= 0)
	{
		sumaSublote = 0;
		pos = 0;
		minSublote = 1000;

		cout << "Ingrese los valores del lote: " << endl;

		while (valor > 0)
		{
			cin >> valor;

			if (valor == 0)
			{
				valor = 1;
				break;
			}
			if (valor < 0)
			{
				break;
			}
		}
		pos++;
		sumaSublote += valor;
		if (valor > maxTotal)
		{
			maxTotal = valor;
			subloteMaximo = contadorSublotes;
			posMaximo = pos;
		}
		if (valor < minSublote && valor != 0)
		{
			minSublote = valor;
		}
	}
	contadorSublotes++;
	if (sumaSublote > 0)
	{
		promedioTotal = sumaSublote / posMaximo;
		sumaSublote = 0;
		cout << "El minimo del sublote es " << minSublote << endl;
		cout << "el promedio del sublote es " << promedioTotal << endl;
		}
	else
	{
		if (valor < 0)
		{
			if (sumaSublote == 0)
			{
				contadorSublotes++;
			}
		}
		if (sumaSublote == 0)
		{
			cout << "El sublote estaba vacio " << endl;
		}
	}

	cout << "La cantidad de sublotes procesados es: " << contadorSublotes << endl;
	cout << "El valor maximo es: " << maxTotal << " se encontraba en el sublote: " << subloteMaximo << " en la posicion " << posMaximo << endl;
}
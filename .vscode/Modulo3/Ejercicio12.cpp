// Se introducen una serie de valores numéricos desde el teclado, siendo el valor final de entrada
// de datos o centinela –99. Se desea calcular e imprimir el número de valores leídos, la suma y media o
// promedio de los valores.

#include <iostream>
using namespace std;

int dato = 0;
int numeros[100];
int pos = 0;
int suma = 0;
int promedio = 0;
main()
{

	do
	{
		cout << "Ingrese un valor numerico" << endl;
		cin >> dato;
		if (dato != -99)
		{
			numeros[pos] = dato;
			pos++;
		}
	} while (dato != -99);

	for (int bucle = 0; bucle < pos; bucle++)
	{
		suma += numeros[bucle];
	}

	promedio = suma / pos;

	cout << "La cantidad de valores leidos es: " << pos << endl;
	cout << "La suma de valores leidos es: " << suma << endl;
	cout << "El promedio de valores es: " << promedio << endl;
}

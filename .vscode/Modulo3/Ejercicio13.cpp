// Inicializar una matriz de dos dimensiones con un valor constante dado K.

#include <iostream>
using namespace std;

const int k = 2;
main()
{
	int matriz[k][k] = {{1, 2}, {3, 4}};
	int filas = (sizeof(matriz) / sizeof(matriz[0]));
	int columnas = (sizeof(matriz[0]) / sizeof(matriz[0][0]));
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << matriz[i][j] << endl;
		}
	}
}

// Dado un conjunto de valores naturales (<20) de los cuales el último es un cero, y no debe
// procesarse, genere e informe un vector que contenga los factoriales de los valores ingresados

#include <iostream>
using namespace std;
int factorialesVec[5];
main()
{
	void factoriales(int[5]);
	int Vec[] = {2, 3, 4, 5, 0};
	factoriales(Vec);

	for (int i = 0; i < 5; i++)
	{
		if (Vec[i] != 0)
		{
			cout << "El factorial de " << Vec[i] << " es: " << factorialesVec[i] << endl;
		}
	}
}

void factoriales(int Vec[5])
{

	for (int i = 0; i < 5; i++)
	{
		int factorial = 1;
		if (Vec[i] != 0)
		{
			for (int fac = 1; fac <= Vec[i]; fac++)
			{
				factorial = factorial * fac;
			}
		}
		factorialesVec[i] = factorial;
	}
}

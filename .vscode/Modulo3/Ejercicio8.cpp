// Desarrolle una función que implemente la búsqueda secuencial en un vector de números enteros

#include <iostream>
using namespace std;

main()
{
	int Vec[] = {0, 2, 1, 3, 5, 6, 4, 8};
	int i, dato;
	bool bandera = false;

	//Busqueda

	i = 0;

	dato = 5;   // Modifique para realizar la busqueda

	while ((bandera == false))
	{
		if (Vec[i] == dato)
		{
			bandera = true;
		}

		i++;
	}

	if (bandera == false)
	{
		cout << "El numero a buscar no existe en el vector" << endl;
	}
	else
	{
		cout << "El numero " << dato << " a sido encontrado en la posicion " << i - 1  << endl;
	}
}
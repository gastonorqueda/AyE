

/*Se ingresa un conjunto de valores float, cada uno de los cuales representan el sueldo de
un empleado, excepto el último valor que es cero e indica el fin del conjunto. Se pide
desarrollar un programa que determine e informe:
a) Cuántos empleados ganan menos de $20.520.
b) Cuántos ganan $20.520 o más pero menos de $30.780.
c) Cuántos ganan $30.780 o más pero menos de $50.999.
d) Cuántos ganan $50.999 o más.

 */
#include <iostream>
using namespace std;

main()
{
	float inputValue = 1;
	int contadorClaseBaja = 0;
	int contadorClaseMediaBaja = 0;
	int contadorClaseMedia = 0;
	int contadorEvadoAfip = 0;

	while (inputValue != 0)

	{
		cout << "Ingrese el sueldo: " << endl;
		cin >> inputValue;

		if (inputValue < 20.520)
		{
			contadorClaseBaja++;
		}

		if (inputValue > 20.520 && inputValue < 30.780)
		{
			contadorClaseMediaBaja++;
		}

		if (inputValue > 30.780 && inputValue < 50.999)
		{
			contadorClaseMedia++;
		}

		if (inputValue > 50.999)
		{
			contadorEvadoAfip++;
		}
	}

	cout << "Cuantos empleados ganan menos de $20.520?: " << contadorClaseBaja << endl;
	cout << "Cuantos ganan $20.520 o más pero menos de $30.780?: " << contadorClaseMediaBaja << endl;
	cout << "Cuantos ganan $30.780 o más pero menos de $50.999?: " << contadorClaseMedia << endl;
	cout << "Cuantos ganan $50.999 o más?: " << contadorEvadoAfip << endl;
}

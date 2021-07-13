#include <iostream>
/* Dados un mes y el año correspondiente informar cuántos días tiene el mes
*/

using namespace std;
main()
{

	int mes;
	int anio;
	bool esBisiesto = false;

	cout << " Introducir el mes" << endl;
	cin >> mes;
	cout << " Introducir el anio " << endl;
	cin >> anio;

	if (mes == 2)
	{
		if (anio % 4 == 0)
		{
			if (anio % 100 == 0)
			{
				if (anio % 400 == 0)
				{
					esBisiesto = true;
				}
			}
			else
			{
				esBisiesto = true;
			}
		}
	}

	if (esBisiesto)
	{
		cout << "El mes tiene 29 dias" << endl;
	}
	if (mes == 2 && !esBisiesto)
	{
		cout << "El mes tiene 28 dias" << endl;
	}
	if (mes != 2 && mes % 2 == 0)
	{
		cout << "El mes tiene 30 dias" << endl;
	}
	if (mes % 2 != 0)
	{
		cout << "El mes tiene 31 dias" << endl;
	}
}

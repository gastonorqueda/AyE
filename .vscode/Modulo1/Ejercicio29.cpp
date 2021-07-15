/* 29 Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que
finaliza con un Nombre = ‘FIN’, informar el nombre de la persona con mayor edad y el de la
más joven
*/

#include <iostream>
using namespace std;

main()
{
	string nombre = "";
	int fechaN = 0;
	int fechaMayor = 0;
	int fechaMenor = 30000000;
	string nombreMayor = "";
	string nombreMenor = "";

	while (nombre != "FIN")
	{
		cout << "Ingrese el nombre: ";
		cin >> nombre;

		if (nombre != "FIN")
		{
			cout << "Ingrese la fecha de nacimiento en formato AAAAMMDD: ";
			cin >> fechaN;

			if (fechaN < fechaMenor)
			{
				fechaMenor = fechaN;
				nombreMayor = nombre;
			}

			if (fechaN > fechaMayor)
			{
				fechaMayor = fechaN;
				nombreMenor = nombre;
			}
		}
	}

	cout << "La persona con mayor edad es: " << nombreMayor << endl;
	cout << "La persona con menor edad es: " << nombreMenor << endl;
}

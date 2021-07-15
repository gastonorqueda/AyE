/* Dados N valores, informar el mayor, el menor y en qué posición del conjunto fueron
ingresados.
*/

#include <iostream>
using namespace std;

main()
{
	string sino = "S";
	float valor;
	float valorMayor = 0;
	float valorMenor = 99999999;
	float posicionMayor = 0;
	float posicionMenor = 0;
	int contadorCiclos = 0;
	while (sino == "S")
	{
		cout << "Ingrese un valor: " << endl;
		cin >> valor;

		valor > valorMayor ? valorMayor = valor, posicionMayor = contadorCiclos : valor;
		valor < valorMenor ? valorMenor = valor, posicionMenor = contadorCiclos : valor;
		contadorCiclos++;

		cout << "Desea seguir cargando valores? S/N ";
		cin >> sino;
	}

	cout << "El mayor es: " << valorMayor << " y fue ingresado en la posicion: " << posicionMayor << endl;
	cout << "El menor es: " << valorMenor << " y fue ingresado en la posicion: " << posicionMenor << endl;
}

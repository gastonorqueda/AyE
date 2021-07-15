/*
26 Desarrollar un programa que lea un conjunto de valores enteros positivos ingresados por
el usuario y que informe por pantalla si el valor ingresado es par o impar. La ejecución del
programa debe finalizar cuando el usuario ingresa un valor igual al anterior.
Desarrolle dos algoritmos, uno usando un ciclo de repetición precondicional y otro con un ciclo
postcondicional. ¿Cuál considera que es más adecuado para resolver el problema? ¿por qué?


ES MAS ADECUADO EL POSTCONDICIONAL YA QUE PERMITE EJECUTAR PREVIAMENTE EL CODIGO Y ASI ES MAS FACIL EVALUAR SI LA VARIABLE SE ESTA REPITIENDO.
*/
#include <iostream>

using namespace std;

main()
{
	string sino;
	int numero;
	int numeroAux = 9999999;
	int numeroAux2 = 999999;
	cout << "Usar ciclo precondicional? S/N " << endl;
	cin >> sino;

	if (sino == "S")
	{
		while (numero != numeroAux2)
		{
			cout << "Introduzca el numero: " << endl;
			cin >> numero;
			numero == numeroAux ? numeroAux2 = numero : numeroAux = numero;
			if (numero % 2 == 0)
			{
				cout << "El numero es par" << endl;
			}
			else
			{
				cout << "El numero es impar" << endl;
			}
		}
	}
	if (sino == "N")
	{
		do
		{
			numeroAux = numero;
			cout << "Introduzca un numero: " << endl;
			cin >> numero;

			if (numero % 2 == 0)
			{
				cout << "El numero es par" << endl;
			}
			else
			{
				cout << "El numero es impar" << endl;
			}

		} while (numero != numeroAux);
	}
}
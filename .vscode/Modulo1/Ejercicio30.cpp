/* Dado un conjunto de valores, que finaliza con un valor nulo, determinar e imprimir (si
hubo valores):
a) El valor máximo negativo
b) El valor mínimo positivo
c) El valor mínimo dentro del rango -17.3 y 26.9
d) El promedio de todos los valores.
*/

#include <iostream>
using namespace std;

main()
{
	float valor = 0;
	float valorMaximoNegativo = 0;
	float valorMinimoPositivo = 9999999;
	float valorMinimoEnRango = 0;
	float promedioValores = 0;
	string nulo = "S";
	while (nulo == "S")
	{
		cout << "Ingrese el valor: " << endl;
		cin >> valor;
		cout << "Desea continuar?: S/nulo " << endl;
		cin >> nulo;

		if (nulo == "S")
		{
			if (valor <= -1 && valor < valorMaximoNegativo)
			{
				valorMaximoNegativo = valor;
			}
			if (valor >= 1 && valor < valorMinimoPositivo)
			{
				valorMinimoPositivo = valor;
			}
			if (valor >= -17.3 && valor <= 26.9 && valor < valorMinimoEnRango)
			{
				valorMinimoEnRango = valor;
			}
			promedioValores = (valorMaximoNegativo + valorMinimoPositivo + valorMinimoEnRango) / 3;
		}
	}

	cout << "El valor máximo negativo es: " << valorMaximoNegativo << endl;
	cout << "El valor mínimo positivo es: " << valorMinimoPositivo << endl;
	cout << "El valor mínimo dentro del rango -17.3 y 26.9 es: " << valorMinimoEnRango << endl;
	cout << "El promedio de todos los valores es: " << promedioValores << endl;
}

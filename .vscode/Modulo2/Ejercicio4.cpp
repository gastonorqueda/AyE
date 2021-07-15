/*)Escribir una función salario() que calcule los salarios de un trabajador para un número dado de
horas semanales trabajadas y un salario hora. Las horas que superen las 40 horas semanales se
pagarán como extras con un salario hora 1,5 veces el salario ordinario.
.*/

#include <iostream>
using namespace std;

float salario(float, float);

main()
{
	float horas;
	float salarioH;
	cout << "Ingrese el numero de horas trabajadas: ";
	cin >> horas;
	cout << "Ingrese el valor de salario por hora: ";
	cin >> salarioH;

	cout << "El salario total es de: $" << salario(horas, salarioH) << endl;
}

float salario(float horas, float salarioH)
{
	if (horas <= 40)
	{
		return horas * salarioH;
	}
	else
	{
		float horasExtra = (horas - 40) * 1.5;
		float salario = (40 + horasExtra) * salarioH;
		return salario;
	}
}

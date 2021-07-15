#include <iostream>
using namespace std;
int Potencia (int base, int exp);

int main ()
{
	int base, exp;
	int PotenciaF;
	cout << "Ingrese la base: ";
	cin >> base;
	cout << "Ingrese el exponente: ";
	cin >> exp;
	PotenciaF= Potencia(base,exp);
	cout << "El Porcentaje diferencia es: " << PotenciaF << endl;
}

int Potencia(int base, int  exp)
{
	int Potenciaf;
	if (exp <=0)
	{
		return 1;
	}
	else
	{
		return base * Potencia (base,exp-1);
	}

}

#include <iostream>
using namespace std;
float CalcularPorcentajeDiferencia (int A, int B);

int main ()
{
	int n1, n2;
	int DiferenciaP;
	cout << "Ingrese el primer numero: ";
	cin >> n1;
	cout << "Ingrese el segundo numero: ";
	cin >> n2;
	DiferenciaP= CalcularPorcentajeDiferencia(n1,n2);
	cout << "El Porcentaje diferencia es: " << DiferenciaP << endl;
}

float CalcularPorcentajeDiferencia(int A, int  B)
{
	int Diferencia;
	Diferencia= (B-A)*100/(A+B);
	return Diferencia;
}

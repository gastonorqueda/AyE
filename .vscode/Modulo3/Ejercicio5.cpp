

#include <iostream>
using namespace std;

int main()
{
	int N = 0;
	int prom;

	cout << "Ingrese cantidad de valores que quiera del vector, tiene que ser entre 5 a 20" << endl;
	cin >> N;

	int Vec[N];
	int i, h;
	for (i = 0; i < N; i++)
	{
		cout << "Ingrese una temperatura que usted quiera" << endl;
		cin >> Vec[i];
		prom = prom + Vec[i];
	}
	prom = prom / i;
	cout << "El promedio de las temperaturas es: " << prom << endl;
	cout << "Las temperaturas que pasan ese promedio son: " << endl;
	for (h = 0; h < N; h++)
	{
		if (prom <= Vec[h])
		{
			cout << Vec[h] << endl;
		}
	}
}
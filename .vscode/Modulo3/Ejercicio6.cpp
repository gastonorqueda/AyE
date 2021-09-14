

#include <iostream>
using namespace std;

int main()
{
	int cs = 1;
	int n, i, max = 0;
	int cd[20] = {0};

	while (cs != 0)
	{
		cout << "Ingrese el codigo de deporte que quiere inscribirse" << endl;
		cin >> n;
		cd[n] = cd[n] + 1;
		cout << "Ingrese el codigo de socio" << endl;
		cin >> cs;
	}
	cout << "La cantidad de inscriptos en cada deporte es: " << endl;
	for (i = 0; i < 20; i++)
	{
		cout << "Deporte: " << i + 1 << " cantidad de inscriptos: " << cd[i] << endl;
		if (cd[i] > max)
		{
			max = cd[i];
			n = i;
		}
	}
	cout << "El deporte con mas incriptos es: " << i;
}
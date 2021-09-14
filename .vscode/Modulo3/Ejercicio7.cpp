
#include <iostream>
using namespace std;

int main()
{
	int N, Ca, i = 0, j, p, k, No;
	cout << "Ingrese cantidad de cursos a registrar" << endl;
	cin >> N;
	int VecA[N];
	int VecD[N];
	int VecAu[N];
	while (i < N)
	{
		cout << "Ingrese cantidad de alumnos" << endl;
		cin >> Ca;
		VecA[i] = 0;
		VecAu[i] = 0;
		VecD[i] = 0;
		int VecN[10];
		for (k = 0; k < 10; k++)
		{
			VecN[k] = 0;
		}
		for (j = 0; j < Ca; j++)
		{
			cout << "Ingrese nota del alumno: " << j + 1 << endl;
			cin >> No;
			switch (No)
			{
			case 1:
				VecN[No + 1] = VecN[No + 1] + 1;
				VecAu[i] = VecAu[i] + 1;
				break;
			case 2:
				VecN[No + 1] = VecN[No + 1] + 1;
				VecD[i] = VecD[i] + 1;
				break;
			case 3:
				VecN[No + 1] = VecN[No + 1] + 1;
				VecD[i] = VecD[i] + 1;
				break;
			case 4:
				VecN[No + 1] = VecN[No + 1] + 1;
				VecD[i] = VecD[i] + 1;
				break;
			case 5:
				VecN[No + 1] = VecN[No + 1] + 1;
				VecD[i] = VecD[i] + 1;
				break;
			case 6:
				VecN[No + 1] = VecN[No + 1] + 1;
				VecA[i] = VecA[i] + 1;
				break;
			case 7:
				VecN[No + 1] = VecN[No + 1] + 1;
				VecA[i] = VecA[i] + 1;
				break;
			case 8:
				VecN[No + 1] = VecN[No + 1] + 1;
				VecA[i] = VecA[i] + 1;
				break;
			case 9:
				VecN[No + 1] = VecN[No + 1] + 1;
				VecA[i] = VecA[i] + 1;
				break;
			case 10:
				VecN[No + 1] = VecN[No + 1] + 1;
				VecA[i] = VecA[i] + 1;
				break;
			default:
				break;
			}
		}
		cout << "El curso: " << i + 1 << " tuvo: " << ((VecA[i] * 100) / Ca) << "% de aprobados,"
			 << " y el de desaprobados es: " << ((VecAu[i] + VecD[i]) * 100) / Ca << "%" << endl;
		for (p = 0; p < 10; p++)
		{
			cout << "Los alumnos que se sacaron: " << p + 1 << " fueron: " << VecN[p] << endl;
		}
		i = i + 1;
	}
}
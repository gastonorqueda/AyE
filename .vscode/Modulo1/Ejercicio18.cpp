#include <iostream>
using namespace std;

/*  Dados N y M números naturales, informar su producto por sumas sucesivas.
*/

main()
{
	int N;
	int M;
	int resultado;

	cout << "Ingrese el primer valor: " << endl;
	cin >> N;
	cout << "Ingrese el segundo valor: " << endl;
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		resultado += N;
	}

	cout << "El resultado del producto: " << resultado << endl;
}

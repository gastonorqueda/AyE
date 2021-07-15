/*)Diseñar una función que calcule x*n para x variable real y n variable entera.*/

#include <iostream>
using namespace std;

float multi(int, float);


main()
{
	int n;
	float x;
	cout << "Ingrese el valor de n: ";
	cin >> n;
	cout << "Ingrese el valor de x: ";
	cin >> x;

	cout<< multi(x,n) << endl;
	

}

float multi(int x, float n)
	{
   		return x * n;	
	}

	
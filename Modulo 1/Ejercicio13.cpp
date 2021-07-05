#include <iostream>
using namespace std;
int main ()
{
	int L1,L2,L3;
	cin >> L1 >> L2 >> L3;
	if (L1==L2&&L1==L3)
	{
		cout << "El triangulo es equilatero";
	}
	else if (L1==L2||L1==L3||L2==L3)
	{
		cout << "El triangulo es isosceles";
	}
	else if (L1!=L2&&L1!=L2&&L2!=L3)
	{
		cout << "El triangulo es escaleno";
	}
	return 0;
	
}


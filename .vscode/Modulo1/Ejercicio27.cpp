#include <iostream>
using namespace std;
int main ()
{
	int n;
	int mayor=0;
for (int i=0;i<10;i++)
{
	cin >> n;
	if (n > mayor)
	{
		mayor=n;
	}
}
cout << "El mayor numero: " << mayor << endl;
return 0; 
}


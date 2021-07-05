#include <iostream>
using namespace std;
int main ()
{
	int pp1, pp2,pp3;
	int total;
cout << "Introduzca el precio de los tres productos en orden: " << endl ;
cin >> pp1 >> pp2 >> pp3;
total=(pp1+pp2+pp3)/3;
cout << "El promedio es: " << total << endl;
return 0;
}

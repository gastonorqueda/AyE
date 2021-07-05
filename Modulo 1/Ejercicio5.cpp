//2020 12 10
#include <iostream>
using namespace std;
int main ()
{
int fecha;
cin >> fecha;
int anio;
int mes;
int dia;
anio=(fecha/10000);
mes=(fecha/100)%100;
dia=(fecha%100);
cout << "El año es: " << anio  <<endl;
cout << "El mes es: " << mes  <<endl;
cout << "El dia es: " << dia  <<endl;
return 0;
}

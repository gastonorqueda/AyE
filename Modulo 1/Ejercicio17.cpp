#include <iostream>
using namespace std;
int main ()
{
int num,tot,prom,suma;
int cont=0;
for(int i=0;i<50;i++)
{
	cout << "Ingrese valor: ";
	cin >> num;
 if (num > 100)
 {
 	cont++;
 	tot=num+tot;
 }
 else if (num < -10)
 {
 	suma=suma+num;
 
 }
}
prom=tot/cont;
cout << "El valor de la suma es: " << suma << endl;
cout << "El promedio es: " << prom << endl;
return 0;
}


#include <iostream>
using namespace std;
int main ()
{
int va1,va2;
cin >> va1 >> va2;
if(va1>va2)
{
	cout << "El mayor valor entre los dos es: " << va1;
	return 0;
}
if(va2>va1)  
{
	
	cout << "El mayor valor entre los dos es: " << va2;
	return 0;
}
else{

 cout << "Los numeros ingresados son iguales";
 return 0;
}
}


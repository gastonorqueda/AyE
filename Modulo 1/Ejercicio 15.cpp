#include <iostream>
using namespace std;
int main ()
{
int edad;
cin >> edad;
if (edad <=12)
{
	cout << "menor";
}
else if (edad >=13 && edad<=18)
{
	cout << "cadete";
}
else if (edad >18 && edad <=26)
{
	cout <<"juvenil";
}
else
{
	cout << "mayor";
}
return 0;
}


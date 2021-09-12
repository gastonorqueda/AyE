#include <iostream>
using namespace std;

 int factorial(int n);


 int main()
 {
 int num, fact;
 cout << ("Ingrese un numero: ");
 cin >> num;
 if (num < 0) {
cout << "El Factorial de un numero negativo de un numero negativo es indefinido" << endl;
 }
 else  {
 fact = factorial(num);
 cout << "El factorial de " << num << " es " << fact;
 }

 } 
int factorial(int n)
 {
 int i, 
 producto = 1;
 
    for (i = n; i > 1; --i) 
	{
      producto *= i;
    }
 
 return (producto);
 }

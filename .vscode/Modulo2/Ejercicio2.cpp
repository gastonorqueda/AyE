/*) Desarrollar una función suma1() que disponga de dos parámetros de entrada y devuelva el
resultado de la suma en su nombre. Luego implementar una función suma2() que disponga de 3
parámetros, dos para la entrada y uno para devolver el resultado de la suma. Ambas funciones
deben cumplir el objetivo de sumar números enteros. Invocar ambas funciones en el programa
principal y mostrar el resultado por pantalla.*/

#include <iostream>
using namespace std;

int suma1(int, int);
int suma2(int, int , int);

main()
{
	
	cout<< suma1(2,3) << endl;
	cout<< suma2(2,3,0) << endl;

}

int suma1(int a, int b)
	{
   		return a + b;	
	}
int suma2(int a, int b,int c)
	{
		c = a + b;
   		return 	c;
	}
	
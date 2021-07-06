#include <iostream>
//Dados dos valores enteros A y B, informar la suma, la resta, el producto y la división.

using namespace std;
main()
{
	int A;
	int B;
	cout << "Introducir un numero entero" << endl;
	cin >> A;
	cout << "Introducir un segundo numero entero" << endl;
	cin >> B;
	int suma = A + B;
	int resta = A - B;
	int producto = A * B;
	int division = A / B;
	cout << "La suma de los numeros es: " << suma << endl;
	cout << "La resta de los numeros es: " << resta << endl;
	cout << "El producto de los numeros es: " << producto << endl;
	cout << "La  division de los numeros es: " << division << endl;
}

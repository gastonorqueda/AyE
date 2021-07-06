#include <iostream>
/* Dada una terna de números naturales que representan al día, al mes y al año de una
determinada fecha informarla como un solo número natural de 8 dígitos con la forma
(AAAAMMDD).*/

using namespace std;
main()
{

	string dia;
	string mes;
	string ano;
	string anofinal = " ";

	cout << "Introducir un numero natural (anio)" << endl;
	cin >> ano;
	anofinal += ano;
	cout << "Introducir un segundo numero natural (mes)" << endl;
	cin >> mes;
	anofinal += mes;
	cout << "Introducir un tercer numero natural (dia)" << endl;
	cin >> dia;
	anofinal += dia;

	
	cout << "La fecha introducida es: " << anofinal << endl;

}

#include <iostream>
/* Dado un número real que representa el importe de una compra informar por pantalla las
posibles formas de pago, según la siguiente tabla:
1 cuota de $.................
2 cuotas de $................. total $................. ( 5% de recargo)
6 cuotas de $................. total $................. ( 30% de recargo)
12 cuotas de $................. total $................. ( 50% de recargo)
.*/

using namespace std;
main()
{

	float importe;

	cout << " Introducir el importe de la compra" << endl;
	cin >> importe;

	float cuotas2 = importe * 1.05;
	float cuotas6 = importe * 1.3;
	float cuotas12 = importe * 1.5;

	cout << "1 cuota de $" << importe << endl;
	cout << "2 cuotas de $" << cuotas2 / 2 << " total $" << cuotas2 << endl;
	cout << "6 cuotas de $" << cuotas6 / 6 << " total $" << cuotas6 << endl;
	cout << "12 cuotas de $" << cuotas12 / 12 << " total $" << cuotas12 << endl;
}

#include <iostream>
using namespace std;

// Desarrollar el algoritmo de un m�dulo que calcule la superficie de un c�rculo y la longitud o per�metro. 
// El valor del radio ser� solicitado al usuario en el programa principal y se pasar� a la funci�n a trav�s de sus par�metros, asimismo �stos se utilizar�n para devolver los resultados. 
// Area = pi * r * r Perimetro = 2 * pi * r Considerar al n�mero pi como 3.141492


int main() {
	
	double pi, radio, area, perimetro;
	
	pi = 3.141492;
	
	cout << "Ingrese por favor, radio del circulo" << endl;
	cin >> radio;
	
	area = (pi * radio * radio);
	
	perimetro = (2 * pi * radio);
	
	cout << "El circulo tiene las siguientes propiedades, su radio es: " << radio << ", su area es: " << area << ", y su perimetro o longitud es: " << perimetro << endl;
	
	system("pause");

}

#include <iostream>
using namespace std;

// Desarrollar el algoritmo de un módulo que calcule la superficie de un círculo y la longitud o perímetro. 
// El valor del radio será solicitado al usuario en el programa principal y se pasará a la función a través de sus parámetros, asimismo éstos se utilizarán para devolver los resultados. 
// Area = pi * r * r Perimetro = 2 * pi * r Considerar al número pi como 3.141492


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

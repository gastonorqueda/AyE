#include <iostream>
using namespace std;

// Dadas dos fechas informar cual es la más reciente. Determine cuáles serían los datos de entrada y las leyendas a informar de acuerdo al proceso solicitado

int main() {
	
	int dia, mes, anio, dia1, mes1, anio1, dia2, mes2, anio2; //fecha en AAAAMMDD
	
	int Fecha1, Fecha2, FechaMasReciente, FechaMasAntigua;
	
	cout << "Ingrese el anio, el mes y el dia de la primera fecha" << endl;
	cin >> anio1 >> mes1 >> dia1;
	
	cout << "Ingrese el anio, el mes y el dia de la segunda fecha" << endl;
	cin >> anio2 >> mes2 >> dia2;
	
	Fecha1 = (anio1 * 10000) + (mes1 * 100) + dia1;
	Fecha2 = (anio2 * 10000) + (mes2 * 100) + dia2;
	FechaMasReciente = (anio * 10000) + (mes * 100) + dia;
	FechaMasAntigua = (anio * 10000) + (mes * 100) + dia;
	
	
	if(Fecha1>Fecha2){
		FechaMasReciente = Fecha1;
		FechaMasAntigua = Fecha2;
		
	}
	
	else{
		FechaMasReciente = Fecha2;
		FechaMasAntigua = Fecha1;
		}
		
	cout << "La fehca mas reciente de las dos es: " << FechaMasReciente << ", y la fecha mas antigua es: " << FechaMasAntigua << endl;
	
	system("pause");
}

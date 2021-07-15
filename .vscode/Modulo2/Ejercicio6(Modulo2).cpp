#include<iostream>


using namespace std;
int leerdatos(int costo, int cantidaminutos, int cantidadminutosab  );
int leerdatos2 (int cantidadminutos, int cantidadminutosab);

int main(){
    int TOT,TAT;
    int TACI,minutosexcedidos, costo, cantidadminutos, cantidadminutosab;
    cout << "Ingrese el costo en pesos: ";
	cin >> costo;
	cout << "Ingrese la cantidad de minutos que incluye el abono: ";
	cin >> cantidadminutos;
	cout << "Ingrese la cantidad de minutos utilizados por el abonado: ";
	cin >> cantidadminutosab;
    TOT=leerdatos(costo,cantidadminutos,cantidadminutosab);
    TAT= leerdatos2 (cantidadminutos,cantidadminutosab);
    cout << "Cantidad de minutos excedidos: " << TAT << endl;
    cout << "Cantidad total a pagar: " << TOT;
    return 0;
}
int leerdatos(int costo, int cantidadminutos, int cantidadminutosab ){
	int minutosexcedidos;
	int TSI,TACI;
	minutosexcedidos= cantidadminutosab-cantidadminutos;
	TSI=((minutosexcedidos*costo)/cantidadminutos)+costo;
	TACI= ((21*TSI)/100)+TSI;
	return TACI;
	
}
int leerdatos2 (int cantidadminutos, int cantidadminutosab)
{
    int minutosexcedidos;
	minutosexcedidos= cantidadminutosab-cantidadminutos;
	return minutosexcedidos;
}

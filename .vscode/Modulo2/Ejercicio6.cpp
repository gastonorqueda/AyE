#include<iostream>


using namespace std;

void leerdatos(int &tiempo){
	cout << "Ingrese el tiempo en el siguiente formato (HHMM): ";
    cin >> tiempo;
}

int main(){
    int tiempo;
    leerdatos(tiempo);
    int horas=tiempo/100;
    cout <<"La hora es: " << horas << endl;
    int minutos=horas*60+(tiempo-(horas*100));
    cout <<"Los minutos totales son: " << minutos;
    return 0;
}


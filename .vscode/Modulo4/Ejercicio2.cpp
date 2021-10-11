#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>

using namespace std;

void escribir();
void leer();

typedef struct 
{
	char nombre[25];
	char apellido[25];
	int legajo;
	int cod_materia;
	int dia;
	int mes;
	int anio;
}Boletas;

main()
{
	FILE *pf;
	pf = fopen("DIAFINALES.dat", "wb");

	int opcion;
	cout << "[ SELECCIONE UNA OPCION ]: " << endl;
	cout << "Escribir (1) "<< endl;
	cout << "Leer (2) "<< endl;
	cin >> opcion;
	switch (opcion)
	{
	case 1:
	{
		escribir();
	}
	case 2:
	{
		leer();
	}
	}
}
void escribir()
{
	
	FILE *pf;
	pf = fopen("DIAFINALES.dat", "ab");
	if (pf == NULL)
	{
		puts("Archivo no existe");
	}

	Boletas boleta;
	do
	{
		cout << "Pidiendo datos: " << endl;
		cout << "Digite el legajo: " << endl;
		cin >> boleta.legajo;
		if (boleta.legajo != NULL)
		{
			cout << "Ingrese su nombre: " << endl;
			cin >> boleta.nombre;
			cout << "Ingrese su apellido: " << endl;
			cin >> boleta.apellido;
			cout << "Digite el codigo de materia: " << endl;
			cin >> boleta.cod_materia;
			cout << "Digite el dia: " << endl;
			cin >> boleta.dia;
			cout << "Digite el numero del mes " << endl;
			cin >> boleta.mes;
			cout << "Digite el anio: " << endl;
			cin >> boleta.anio;
			fwrite(&boleta, sizeof(Boletas), 1, pf);
		}
	} while (boleta.legajo != NULL);

	
	printf("Se almacenado correctamente el valor");
	fclose(pf);
}

void leer()
{

	FILE *pf;
	pf = fopen("DIAFINALES.dat", "rb");
	if (pf == NULL){
		exit(1);
	}
	Boletas boleta;
	fread(&boleta, sizeof(Boletas), 1, pf);
	while (!feof(pf))
	{
		printf("%i %s %0.2f\n", boleta.legajo, boleta.cod_materia, boleta.dia, boleta.mes, boleta.anio, boleta.nombre, boleta.apellido);
		fread(&boleta, sizeof(Boletas), 1, pf);
	}
	fclose(pf);
}
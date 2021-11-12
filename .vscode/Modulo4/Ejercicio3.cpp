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
} Boletas;

main()
{

	FILE *pf;
	FILE *pf2;
	pf = fopen("DIAFINALES.dat", "rb");
	pf2 = fopen("MATFINALES.dat", "ab");
	if (pf == NULL)
	{
		exit(1);
	}
	printf("Ingrese el codigo de la materia: ");
	int cod;
	scanf("%i", &cod);
	Boletas boleta;
	int existe = 0;
	fread(&boleta, sizeof(Boletas), 1, pf);
	while (!feof(pf))
	{
		if (cod == boleta.cod_materia)
		{	
			fwrite(&boleta, sizeof(Boletas), 1, pf2);
			existe++;
			printf(existe," Alumno Cargado");
			
		}
		fread(&boleta, sizeof(Boletas), 1, pf);
	}
}

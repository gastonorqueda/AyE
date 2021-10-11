#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>

using namespace std;

void escribir();

struct Alumnos
{
	int legajo;
	float promedio;
};

main()
{
	escribir();
}
void escribir()
{

	FILE *pf;
	char n_archivo[100];
	printf("Nombre del archivo: ");
	gets(n_archivo);
	strcat(n_archivo, ".dat");

	pf = fopen(n_archivo, "ab");
	if (pf == NULL)
	{
		puts("Archivo no existe");
	}

	Alumnos alumno;
	do
	{
		cout << "Pidiendo datos: " << endl;
		cout << "Digite el legajo: ";
		cin >> alumno.legajo;
		float nota1;
		float nota2;
		if (alumno.legajo > 0)
		{
			cout << "Digite la nota del primer parcial: ";
			cin >> nota1;
			cout << "Digite la nota del segundo parcial: ";
			cin >> nota2;
			
			alumno.promedio = (nota1 + nota2) /  2;
		}
		cout << "Legajo: "<<alumno.legajo<<" Promedio: "<< alumno.promedio << endl;
	} while (alumno.legajo > 0);

	fwrite(&alumno, sizeof(Alumnos), 1, pf);
	printf("Se almacenado correctamente el valor");
	fclose(pf);
}
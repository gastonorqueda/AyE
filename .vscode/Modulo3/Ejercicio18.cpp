// Dados los registros anteriores crear un vector de 50 posiciones. Para el caso a) imprimir:
// a. La posición 8 del vector, campo dia.
// b. La posición 0 del vector campo nombre.
// Para el caso b):
// c. La posición 30 campo apellido
// d. La posición 22 campos legajo, y calificaciones (las 3 notas).

#include <iostream>
using namespace std;

struct fechaNacimiento
{
    int dia;
    int mes;
    int anio;
};

struct Per
{
    string nombre;
    struct fechaNacimiento diaDeNacimiento;
} VectorA[50];

struct calificaciones
{
    int nota1;
    int nota2;
    int nota3;
};

struct NyAp
{
    string nombre;
    string apellido;
};
struct Persona
{
    int legajo;
    struct NyAp name;
    struct calificaciones notas;
} VectorB[50];

main()
{
    VectorA[8].diaDeNacimiento.dia = 29;
    VectorA[0].nombre = "Luis";
    VectorB[30].name.apellido = "Suarez";
    VectorB[22].legajo = 1324;
    VectorB[22].notas.nota1 = 7;
    VectorB[22].notas.nota2 = 10;
    VectorB[22].notas.nota3 = 8;

    cout << VectorA[8].diaDeNacimiento.dia << endl;
    cout << VectorA[0].nombre << endl;
    cout << VectorB[30].name.apellido << endl;
    cout << "Legajo numero: " << VectorB[22].legajo << endl;
    cout << "La nota 1 es: " << VectorB[22].notas.nota1 << endl;
    cout << "La nota 2 es: " << VectorB[22].notas.nota2 << endl;
    cout << "La nota 3 es: " << VectorB[22].notas.nota3 << endl;
}

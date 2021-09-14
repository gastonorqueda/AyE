#include <iostream>
#include <string>
using namespace std;
 
struct fechaNacimiento
{
    int  dia;
    int  mes;
    int anio;
};
 
struct Per
{
    string nombre;
    struct fechaNacimiento diaDeNacimiento;
};
 
int main()
{
    Per persona;
 
    persona.nombre = "Juan";
    persona.diaDeNacimiento.dia = 3;
    persona.diaDeNacimiento.mes = 4;
    persona.diaDeNacimiento.anio = 2003;
    cout << "El nombre de la persona es: " << persona.nombre<<endl;
 	cout << "El dia de nacimiento es: " << persona.diaDeNacimiento.dia<<endl;
 	cout << "El mes de nacimiento es: " << persona.diaDeNacimiento.mes<<endl;
 	cout << "El anio de nacimiento es: " << persona.diaDeNacimiento.anio<<endl;
    return 0;
}


/* 17b
struct calificaciones
{
    int  nota1;
    int  nota2;
    int nota3;
};
 
struct NyAp
{
    string nombre;
    string apellido;
};
struct Persona
{
    int  legajo;
    struct  NyAp name;
    struct calificaciones notas;
};

int main()
{
    Persona alumno;
 
    alumno.legajo = 28054312;
    alumno.name.nombre  = "Ramon";
    alumno.name.apellido= "Perez";
	alumno.notas.nota1= 8;
    alumno.notas.nota2= 9;
    alumno.notas.nota3= 10;
    cout << "El nombre de la alumno es: " << alumno.name.nombre<<endl;
 	cout << "El apellido del alumno es: " << alumno.name.apellido<<endl;
 	cout << "El legajo del alumno es: " << alumno.legajo<<endl;
 	cout << "La primer nota del alumno es: " << alumno.notas.nota1<<endl;
 	cout << "La segunda nota del alumno es: " << alumno.notas.nota2<<endl;
 	cout << "La tercer nota del alumno es: " << alumno.notas.nota3<<endl;
    return 0;
}
*/



/*
En un torneo de fútbol participan K equipos. El torneo se juega con el sistema de todos
contra todos. Por cada partido disputado por un equipo se dispone de la siguiente información :
Nro. de equipo,
Código del resultado ('P'= Perdido, 'E'= Empatado, 'G'= Ganado).
Se arma un lote de datos con todos los resultados del torneo, agrupados por Nro. de equipo.
Desarrollar el programa que imprima:
1) Por cada equipo, su número y el puntaje total que obtuvo (suma 3 si gana, y 1 si empata).
2) Nro. de equipo que totalizó la menor cantidad de puntos. (hay solo uno).


 */
#include <iostream>

using namespace std;



//Prototipos de Funciones

void Proceso(int, int, int, int&, int&, int&);

void Validar(int, int, int);



//Funcion Proceso

void Proceso(int k, int p, int codEq, int& pg, int& pe, int& pp)

{
	int s = 0;
	int puntaje = 0;
	while (s < p)
	{
		char resultado;

		cout << "Ingrese Resultado de Partido: " << endl;

		cin >> resultado;

		switch (resultado)

		{

		case 'G':

			puntaje = puntaje + 3;

			pg = pg + 1;

			break;

		case 'E':

			puntaje = puntaje + 1;

			pe = pe + 1;

			break;

		default:

			pp = pp + 1;

		}

		s = s + 1;

		p = p - 1;

	}

	cout << "Codigo de Equipo: " << codEq << endl;

	cout << "Puntaje Total del Equipo: " << puntaje << endl;

}


void Validar(int pg, int pe, int k)

{
	if (2 * pg + pe == k * (k - 1))

	{
		cout << "Valido" << endl;
	}

	else

	{
		cout << "No Valido" << endl;
	}

}



int main()

{

	int k = 0;
	int p = 0;
	int cont = 0;
	int codEq = 0;
	int pg = 0;
	int pe = 0;
	int pp = 0;


	cout << "Ingrese la cantidad de equipos: " << endl;

	cin >> k;


	p = (k * (k - 1) / 2);

	while (cont < k)

	{

		cout << "Ingrese Codigo de Equipo: " << endl;

		cin >> codEq;

		Proceso(k, p, codEq, pg, pe, pp);

		cont = cont + 1;

	}


	cout << "Partidos Ganados: " << pg << endl;
	cout << "Partidos Empatados: " << pe << endl;
	cout << "Partidos Perdidos: " << pp << endl;


	Validar(pg, pe, k);

	return 0;

}

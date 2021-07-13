

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

main()
{
	int equipos;
	cout << "Introduzca la cantidad de equipos que participan en el torneo: " << endl;
	cin >> equipos;

	int partidos = equipos/2 * equipos-1;

	for(int i = 0; i < equipos;i++)
	{

	}
}

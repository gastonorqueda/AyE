// Se pide:
// (2 puntos) Defina y declare TODAS las estructuras de datos necesarias para la correcta resolución del problema
// (2 puntos) Declare el prototipo de las funciones propuestas
// (3 puntos) Desarrolle la función emitirListado
// (1 puntos) Es posible reutilizar una misma función para ambos ordenamientos? Justifique
// (1 punto) Es posible realizar el listado sin ordenar los vectores de vendedores y modelos? Justifique
// (1 punto) Que búsquedas propondría teniendo en cuenta esa diversidad de contextos?.Justifique
#include <iostream>
using namespace std;

struct Vendedores
{
	int idVendedor[10];
	char apeYNOm[20];
} vendedores[10];

struct Modelos
{
	char idModelo[4];
	char descripcion[20];
} modelos[15];
struct Ventas
{
	struct Vendedores idVendedor;
	struct Modelos idModelo;
	int fecha;
	char cliente[20];
} ventas[99];

void ordenarVendedores(Vendedores vendedor);
void ordenarModelos(Modelos modelo);
void emitirListado(Vendedores[], Modelos[], Ventas[]);


main()
{
	
	for (int i = 0; i < 10; i++)
	{
		ordenarVendedores(vendedores[i]);
	}

	for (int i = 0; i < 15; i++)
	{
		ordenarModelos(modelos[i]);
	}

	void emitirListado(Ventas vendedores, Modelos modelos, Ventas ventas);
}

void ordenarModelos(Modelos modelo)
{
	//Ordenamiento
}

void ordenarVendedores(Vendedores vendedor)
{
	//Ordenamiento
}

void emitirListado(Vendedores vendedores[], Modelos modelos[], Ventas ventas[])
{
	int aux = 0;  //Implemento un ordenamiento metodo burbuja por fechas
	for (int i = 0; i < 99; i++)  //Como itero sobre la estrucutra, me garantiza que aun hay datos.
	{
		for (int j = 0; j < 99; j++)
		{
			if (ventas[j].fecha > ventas[j+ 1].fecha) //Si cumple el condicional realizo el cambio de posicion.
			{
				aux = ventas[j].fecha; //Guardo en un auxiliar para usar proximamente.
				ventas[j].fecha = ventas[j + i].fecha;
				ventas[j+ 1].fecha = aux; 
			}
		}	
	}
	
	for (int i = 0; i < 99; i++)
	{
		cout<<'Fecha: '<<ventas[i].fecha<<" - Cantidad de ventas:"<<'99'<<endl;
		cout<<'Cliente: '<<ventas[i].cliente<<'Vendedor: '<<ventas[i].idVendedor.apeYNOm<<'Descripcion: '<<ventas[i].idModelo.descripcion<<endl;
	}
	
}
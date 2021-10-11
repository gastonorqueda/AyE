/*
Crear un arbol sin recursividad.
recorro el arbol con el metodo que quiera
El arbol no existe, la aplicacion lo crea

Sin recursividad, buscar un valor X
en el arbol
Si existe: encontrado, Sino, No encontrado.


Mientras valor sea != 0, tomar valores para ingresar al arbol, 
DO WHILE, si existe, tire mensaje que existe y pregunte denuevo.
Se crea un nuevo nodo, raiz aux -> info = dato, el *nuevoabb->der = null y ->iz = null
Inicializando la raiz en NULL siempre
Para todo nuevo elemento:
nuevo->info = dato;
nuevo->izq = NULL;
nuevo->der = NULL;
El dezplazamiento se hace con un AUX.
De principio, aux_raiz->izq = NULL, aux_raiz->der = NULL. Hay que hacer que aux_raiz->izq = nuevo
De la foto ahora nuevo -> info = 12, pregamos si esto es < raiz_aux->info < nuevo->info.....
Aux_raiz = raiz_aux->izq;....
Hay que hacer un do while o tendriamos un if gigante. PUede tb considerarse con un ciclo verdadero... 
tener condiciones de si lo encontro, no lo inserta y si lo encontro
insertarlo y dejar los izq y der = NULL de ese nuevo dato.
Nuevo->info (12), se pregunta si es mayor a la raiz, ahi se ve si el punteor correspondiente 
es distinto de null, de serlo se desplaza al siguiente,
de no serlo, crea el nuevo dato y el izq de la raiz apuntando a ese dato.... 
preguntando por mayor y menor.
HAy 3 opciones al ingresar datos al arbol. Agrego el dato al arbol, me desplazo
 en el arbol der o izq hasta el punto en que se agrega o dato invalido

la funcion insertar usa punteros y devuelve punteros, son tipo puntero

nuevo dato

Se solicita con la funcion malloc.
Preguntar si el arbol exis,te porq lado nos vamos.
nuevo->info = dato (14);
nuevo->izq = NULL;
nuevo->der = NULL;
Ya tenemos el nuevo nodo, verificar si raiz != NULL, entonces existe, decimos Aux = raiz;,
si nuevo->info < aux->info (15), y aux->izq != NULL, y nos desplazamos
y se pregunta todo dneuevo.si nuevo->info < aux->info (13), y aux->der!=NULL, 
if true, desplazamos, else aux ->der = nuevo y queda enlazado.
*/

//typedef struct Nodo abb;

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Nodo
{
    int dato;
    Nodo *der;
    Nodo *izq;
};
struct Nodo *arbol = NULL;

void menu();
Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);
void insertarIretativo(int);
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *, int);
bool busquedaIterativo(Nodo *, int);
void preOrden(Nodo *);
void InOrden(Nodo *);
void PostOrden(Nodo *);

int main()
{
    insertarIretativo(8); //Funcion Iterativa
    insertarIretativo(3);
    insertarIretativo(10);
    insertarIretativo(1);
    insertarIretativo(6);
    insertarIretativo(4);
    insertarIretativo(7);
    insertarIretativo(14);
    insertarIretativo(13);
    menu();
    //getch();
    return 0;
}

void menu()
{
    int dato, opcion, contador = 0;
    do
    {
        printf("\n\t MENU");
        printf("\n\t 1. Mostrar Arbol Completo");
        printf("\n\t 2. Recorrer en PreOrden");
        printf("\n\t 3. Recorrer en InOrden");
        printf("\n\t 4. Recorrer en PostOrden");
        printf("\n\t 5. Salir");
        printf("\n\t Opcion: ");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
        {
            printf("\nMostrando Arbol Completo\n\n:");
            mostrarArbol(arbol, contador);
            printf("\n");
            system("pause");
            break;
        }
        case 2:
        {
            printf("\nRecorrido en PreOrden.");
            preOrden(arbol);
            printf("\n");
            break;
        }
        case 3:
        {
            printf("\nRecorrer en InOrden");
            InOrden(arbol);
            printf("\n");
            break;
        }
        case 4:
        {
            printf("\nRecorrer en PostOrden");
            PostOrden(arbol);
            printf("\n");
            break;
        }

        }                  //fin switch
    } while (opcion != 5); //fin do while
}

Nodo *crearNodo(int n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;

    return nuevo_nodo;
}

void insertarNodo(Nodo *&arbol, int n)
{
    if (arbol == NULL)
    { //arbol vacio
        Nodo *nuevo_nodo = crearNodo(n);
        arbol = nuevo_nodo; //Nodo raiz
    }
    else
    { //el arbol ya tiene un nodo o mas
        if (busqueda(arbol, n) == false)
        {
            int valorRaiz = arbol->dato; //obtenemos el valor de la raiz
            if (n < valorRaiz)
            {                                //va al lado izquierdo pues es menor a la raiz
                insertarNodo(arbol->izq, n); //reemplazar esto sin recursividad
            }
            else
            {                                //Elemento es mayor a la raiz, se inserta en el lado derecho
                insertarNodo(arbol->der, n); //reemplazar esto sin recursividad
            }
        }
        else
            printf("\nEl Dato ingresado ya existe");
    }
}
//Funcion Insertar Iterativo Sin Recursividad.
void insertarIretativo(int x)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = x;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    if (arbol == NULL)
    {
        arbol = nuevo_nodo; //Nodo raiz
    }
    else
    {
        if (busquedaIterativo(arbol, x) == false)
        {
            struct Nodo *anterior, *reco;
            anterior = NULL;
            reco = arbol;
            while (reco != NULL)
            {
                anterior = reco;
                if (x < reco->dato)
                    reco = reco->izq;
                else
                    reco = reco->der;
            }
            if (x < anterior->dato)
                anterior->izq = nuevo_nodo;
            else
                anterior->der = nuevo_nodo;
        }
        else
            printf("\nEl Dato ingresado ya existe");
    }
}

void mostrarArbol(Nodo *arbol, int cont)
{ //contador ayuda a separar un nodo del otro
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        mostrarArbol(arbol->der, cont + 1);
        int i;
        for (i = 0; i < cont; i++)
        {
            printf("   ");
        }
        printf("%d\n", arbol->dato);
        mostrarArbol(arbol->izq, cont + 1);
    }
}

bool busqueda(Nodo *arbol, int n)
{
    if (arbol == NULL)
    { //si el arbol esta vacio
        return false;
    }
    else if (arbol->dato == n)
    { //si el nodo es igual al elemento buscado
        return true;
    }
    else if (n < arbol->dato)
    {
        return busqueda(arbol->izq, n);
    }
    else
    { // n>arbol->dato
        return busqueda(arbol->der, n);
    }
}

bool busquedaIterativo(Nodo *arbol, int x)
{
    if (arbol == NULL) //si el arbol esta vacio
        return false;
    else
    {
        while (arbol != NULL && x != arbol->dato)
        {
            if (x < arbol->dato)
                arbol = arbol->izq;
            else
                arbol = arbol->der;
        }
        if (arbol != NULL)
            return true;
        else
            return false;
    }
}

//Recorrido en profundidad - PreOrden
void preOrden(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        printf(" %d - ", arbol->dato);
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

void InOrden(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        InOrden(arbol->izq);
        printf(" %d - ", arbol->dato);
        InOrden(arbol->der);
    }
}

void PostOrden(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        PostOrden(arbol->izq);
        PostOrden(arbol->der);
        printf(" %d - ", arbol->dato);
    }
}
/* libreria que implementa las funciones de una estructuras de datos correspondiente a una lista simplemente enlazada */

#include <stdio.h>
#include <stdlib.h>

// definicion del tipo de datos nodo
typedef struct nodo
{

    int value;
    struct nodo *next;

} nodo;

// añadir un elemento a la lista

void addNodo(nodo **p, int val)
{

    nodo *aux;                  //puntero a una struct tipo nodo
    aux = malloc(sizeof(nodo)); // crea objeto y lo aloja en el heap
    aux->value = val;           // asigna el valor
    aux->next = *p;
    *p = aux;
}

void printNodo(nodo *p)
{

    nodo *cursor; // puntero que nos va a servir para recorrer la lista
    cursor = p;   // el cursor apunta al primer elemento de la lista
    do
    {

        printf("%d\n", cursor->value);
        cursor = cursor->next;
    } while (cursor->next != NULL);
    printf("%d\n", cursor->value);
}

int main(int argc, char const *argv[])
{
    int buffer_test[4] = {4, 6, 8, 2}; // vector de prueba
    nodo *p = NULL;                    // definimos una lista vacia

    // agregamos los elementos del vector a la lista
    for (int i = 0; i < 4; i++)
    {
        addNodo(&p, buffer_test[i]);
    }

    //imprimimos la lista en pantalla
    printNodo(p);
    return 0;
}

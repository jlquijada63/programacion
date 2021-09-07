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

    struct nodo *aux;
    aux = malloc(sizeof(nodo));
    aux->value = val;
    aux->next = *p;
    *p = aux;
}

void printNodo(nodo *p)
{

    nodo *aux;
    aux = p;
    while (aux != NULL)
    {

        printf("%d\n", aux->value);
    }
}

int main(int argc, char const *argv[])
{
    int buffer_test[4] = {4, 6, 8, 2};
    struct nodo *p = NULL;

    // creamos la lista a partir del vector
    for (int i = 0; i < 4; i++)
    {
        addNodo(&p, buffer_test[i]);
    }

    //imprimimos la lista en pantalla
    printNodo(p);
    return 0;
}


/* Realizar un programa que dado un numero N, introducido como dato, escriba todos los numeros 
comprendidos entre 1 y 10000 que cumplan las dos reglas siguiente:
1. regla: La suma de sus cifras debe ser un divisor de N
2. regla: El producto de sus cifras debe ser un multiplo de N */

#include <stdio.h>
#include <stdlib.h>
#include "parsernumber.h"
#include "funciones.h"
#define MAX_VECTOR 100

int main(int argc, char const *argv[])
{
    /* int N = atoi(argv[1]);
    int j = 0;
    int buffer_res[MAX_VECTOR];
    for (int i = 0; i < MAX_VECTOR; i++)
    {
        buffer_res[i] = 0;
    }
 */
    /* for (int i = 1; i < 10000; i++)
    {
        if (result(N, i))
        {
            buffer_res[j] = i;
            j++;
        }
    } */

    // mostramos el resultado en pantalla
    /* for (int i = 0; i < MAX_VECTOR; i++)
    {
        printf("%d", buffer_res[i]);

    }
    printf("\n"); */

    // determinamos si existe algun numero entre el 1 y 500 que

    for (int j = 0; j <= 500; j++)
    {
        for (int i = 1; i < 10000; i++)
        {
            if (result(j, i))
            {
                printf("%d\n", j);
            }
        }
    }
}

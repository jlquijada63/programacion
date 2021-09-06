
#include <stdio.h>
#include "parsernumber.h"
#define VECTOR_SIZE 4
#define BASE 10

/* funcion que separa los digitos de un numero entero que se le pasa como parametro y los guarda en un vector */

void parsernumber(int n, int *vector)
{
    int i = 0;
    while (n >= BASE)
    {
        vector[i] = n % BASE;
        n = n / BASE;
        i++;
    }

    vector[i] = n;
}

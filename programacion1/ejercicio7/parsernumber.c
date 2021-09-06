
#include <stdio.h>
#define VECTOR_SIZE 5
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

/* probando la funcion */
int main(int argc, char const *argv[])
{

    int buffer_prueba[5];
    parsernumber(3575, buffer_prueba);

    // imprimimos el resultado

    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        printf("%d ", buffer_prueba[i]);
    }

    return 0;
}

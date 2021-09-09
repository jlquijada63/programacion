#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

// funcion principal de prueba
int main(int argc, char const *argv[])
{
    int target = atoi(argv[1]);
    int vec_divisores[target];

    // inicilizamos el vector a 0
    for (int i = 0; i < target; i++)
    {
        vec_divisores[i] = 0;
    }

    divisores(vec_divisores, target);

    for (int i = 0; i < target; i++)
    {
        printf("%d\n", vec_divisores[i]);
    }

    // imprimimos la suma de los elementos del vector
    printf("La suma de los elementos del vector es:%d\n", sumaVector(vec_divisores, target));
    if (esPerfecto(target))
    {
        printf("En numero %d es perfecto\n", target);
    }
    else
    {
        printf("El numero %d no es perfecto\n", target);
    }
}
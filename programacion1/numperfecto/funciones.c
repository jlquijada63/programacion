#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

// funcion que calcula los divisores de un numero dado

void divisores(int *div, int n)
{
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            div[j] = i;
            j++;
        }
    }
}

// funcion que calcular la suma de un vector de enteros
int sumaVector(int *vect, int vect_length)
{
    int sum = 0;
    for (int i = 0; i < vect_length; i++)
    {
        sum += vect[i];
    }
    return sum;
}

// funcion que devuelve si el numero que se le pasa por parametro es perfecto
boolean esPerfecto(int n)
{
    int vector[n];
    // reseteamos a 0 el vector
    for (int i = 0; i < n; i++)
    {
        vector[i] = 0;
    }
    divisores(vector, n);
    return (sumaVector(vector, n) == n);
}

// funcion principal de prueba
/* int main(int argc, char const *argv[])
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
} */

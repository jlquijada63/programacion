

#include <stdio.h>
#define VECTOR_SIZE 4
#define BASE 10
#include "funciones.h"



/* Funcion para determinar si un numero es divisor de otro */
boolean esDivisor(int dividendo, int divisor)
{

    return (dividendo % divisor == 0);
}

/* funcion que realiza la suma de los elementos de un vector */
int sumaVector(int *v, int v_size)
{

    int counter = 0;
    for (int i = 0; i < v_size; i++)
    {
        counter += v[i];
    }
    return counter;
}

/* funcion que devuelve el producto de los elementos de un vector */

int mulVector(int *v, int v_size)
{

    int counter = 1;
    for (int i = 0; i < v_size; i++)
    {
        counter *= v[i];
    }
}

/* funcion que separa los digitos de un numero entero que se le pasa como parametro y los guarda en un vector */

void parsernumber(int n, int *vector)
{
    char aux[VECTOR_SIZE+1];
    int i = 0;
    sprintf(aux,"%d", n);   // guardamos el entero en una cadena de texto
    while (aux[i] != '\0'){
        vector[i] = (int)aux[i];    // convertimos el array de caracteres en un array de enteros
        i++;
    }
    
}

/* funcion que determina si se cumplen las condiciones del problema */

boolean result(int N, int number)
{

    int buffer[4] = {0, 0, 0, 0};
    parsernumber(number, buffer);
    int suma = sumaVector(buffer,4);
    int prod = mulVector(buffer,4);
    return esDivisor(N, suma) & esDivisor(prod, N);
}
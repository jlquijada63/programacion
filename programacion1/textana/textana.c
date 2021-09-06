
/* Analiza un texto terminado con un punto y determina:
1. Numero total de caracteres
2. Numero total de vocales
3. Total de veces utilizada la vocal a mayuscula y minuscula
4. Lo mismo par el resto de las vocales
*/
#include <stdio.h>
#include <stdlib.h>
#include "grafico.h"

typedef enum
{
    FALSE,
    TRUE
} boolean;

/* determina si un caracter es una vocal mayuscula */

int main(int argc, char const *argv[])
{
    char c;
    int countertotal = 0;
    int countervocals[5];
    int totalvocals = 0;
    char vocals[5] ={'a','e','i','o','u'};
    // inicializamos a 0 el array
    for (int i = 0; i < 5; i++)
    {
        countervocals[i] = 0;
    }
    c = getchar();
    while (c != '.') // lee un caracter del flujo de entrada
    {

        countertotal++; //numero total de caracteres antes del punto

        switch (c)
        {
        case 'a':
        case 'A':
            ++countervocals[0];
            break;
        case 'e':
        case 'E':
            ++countervocals[1];
            break;
        case 'i':
        case 'I':
            ++countervocals[2];
            break;
        case 'o':
        case 'O':
            ++countervocals[3];
            break;
        case 'u':
        case 'U':
            ++countervocals[4];
            break;
        }
        c = getchar();
    }

    for (int i = 0; i < 5; i++)
    {

        totalvocals = totalvocals + countervocals[i];
    }

    // salida en pantalla:

    printf("Numero total de caracteres: %d\n", countertotal);
    printf("Numero total de vocales: %d\n", totalvocals);
    printf("Recuento de vocales: \n");
    drawGraph(countervocals,vocals,5);

    return 0;
}
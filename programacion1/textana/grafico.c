
/* dibuja una grafica de barras horizontales */
/* Autor: Jose Luis Quijada */

#include <stdio.h>
#include "grafico.h"
#define MAX_BUFFER 5

int buffer[MAX_BUFFER] = {4, 6, 7, 11, 13};

void drawBar(int value)
{
    
    for (int i = 1; i <= value; i++)
    {
        printf("*");
    }

    printf("%2d ", value);
}

int drawGraph(int *data, char *labels, int datalength)
{

    for (int i = 0; i < datalength; i++)
    {
        printf("%c: ",labels[i]);
        drawBar(data[i]);
        printf("\n");
    }
    return 0;
}

/* int main(int argc, char const *argv[])
{
    for (int i = 0; i <= MAX_BUFFER; i++){
        drawBar(buffer[i]);
        printf("\n");
    }
}
 */
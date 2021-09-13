/* modulo que dibuja un diagrama de barras horizontal a partir de los datos */

#include <stdio.h>
#include <string.h>
#include "graph.h"


int graph (int *data, char *label[],int length){

    
    for (int i = 0; i < length;i++){
        printf("%s ", label[i]);
        for (int j = 0; j <= data[i]; j++){     // dibuja una barra
            printf("*");
        }
        printf(" %d", data[i]);
        printf("\n");

    }

    return 0;
}


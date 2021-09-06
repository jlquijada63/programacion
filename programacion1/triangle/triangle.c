
#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    NO,
    EQUILATERO,
    ISOSCELES,
    ESCALENO,
    RECTANGULO
} triangulo;

triangulo tipoTriangulo(int c1, int c2, int h)
{
    if ((c1 * c1 + c2 * c2) == h * h)
    {
        return RECTANGULO;
    }
    if (h > (c1 + c2))
    {
        return NO;
    }
    else if (h == c1 & h == c2)
    {
        return EQUILATERO;
    }
    else if (c1 == c2)
    {
        return ISOSCELES;
    }
    else if (c1 != c2 & c2 != h & c1 != h)
    {
        return ESCALENO;
    }
}

void printTriangle (triangulo t){
    switch (t){
        case 0:
            printf("No es un triangulo");
        case 1:
            printf("Equilatero");
        case 2:
            printf("Isosceles");
        case 3: 
            printf("Escaleno");
        case 4:
            printf("Equilatero");
    }
}

int main(int argc, char const *argv[])
{

    int cat1 = atoi(argv[1]);
    int cat2 = atoi(argv[2]);
    int hip = atoi(argv[3]);

    int tipo_t = tipoTriangulo(cat1,cat2,hip);

    printf("El triangulo es del tipo: ");
    printTriangle(tipo_t);
    printf("\n");

    return 0;
}

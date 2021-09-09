
// definicion del tipo booleano
typedef enum
{
    FALSE,
    TRUE
} boolean;

// funcion que calcula los divisores de un numero dado
void divisores(int *div, int n);

// funcion que calcular la suma de un vector de enteros
int sumaVector(int *vect, int vect_length);

// funcion que devuelve si el numero que se le pasa por parametro es perfecto
boolean esPerfecto(int n);

/* definicion del tipo de datos boolean */
typedef enum
{
    FALSE,
    TRUE
} boolean;

/* determina si un numero es divisor de otro */
boolean esDivisor(int dividendo, int divisor);

/* realiza la suma de los elementos de un vector */
int sumaVector(int *v, int v_size);

/* devuelve el producto de los elementos de un vector */
int mulVector(int *v, int v_size);

/* separa los digitos de un numero entero cargandolos en un vector*/
void parsernumber(int n, int *vector);

/* funcion que determina si el numero cumple las condiciones */
boolean result(int N, int number);

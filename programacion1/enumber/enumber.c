

#include <stdio.h>
#include <stdlib.h>
#include "factorial.h"


int main(int argc, char const *argv[])
{
    
    int i = 1;
    double value = 0.0;
    double e = 1.0;
    int f;
    double precision = atof(argv[1]);
   
    do
    {
      f = factorial(i);
      value = (float)1/f;
      e = e + value;
      i++;
    } while (value > precision);
    

    printf ("VALOR DE e = %f\n",e);

}    
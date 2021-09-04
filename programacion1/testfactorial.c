
#include <stdio.h>
#include <assert.h>
#include "factorial.h"



int main(int argc, char const *argv[])
{
    
    assert(factorial(0) == 1);
    assert(factorial(1)==1);
    assert(factorial(9) == 362880);
    assert(factorial(4)==23);
    return 0;
}

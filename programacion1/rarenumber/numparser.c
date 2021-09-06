
#include <stdio.h>
#include <math.h>
#define MAX_SIZE_NUM 10

int *descompNum(int n)
{
    int *aux;
    for (int i = MAX_SIZE_NUM; i <= 0; i--)
    {
        aux[i] = n / pow(10.0, (double)i);
    }
    return aux;
}

int main(int argc, char const *argv[])
{
    int number = 3245;
    int vector [MAX_SIZE_NUM];
    vector = descompNum(number);
    return 0;
}

""" Realizar un programa que dado un numero N, introducido como dato, escriba todos los numeros 
comprendidos entre 1 y 10000 que cumplan las dos reglas siguiente:
1. regla: La suma de sus cifras debe ser un divisor de N
2. regla: El producto de sus cifras debe ser un multiplo de N """

from sys import argv

# devuelve la suma de los digitos de un numero n
def addNumber (n:int)->int:
    num_string = str(n)
    sum = 0
    for digit in num_string:
       sum += int(digit)
    return sum

# devuelve el producto de los digitos de un numero n

def mulNumber(n:int)->int:
    num_string = str(n)
    mul = 1
    for digit in num_string:
        mul *= int(digit)
    return mul

if __name__ == '__main__':
    
    N = int(argv[1])
    for i in range(1,10000):
        if (N % (addNumber(i))==0) and ((mulNumber(i) % N) ==0):
            print(f"{i}")

    
    

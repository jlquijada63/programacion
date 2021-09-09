"""Realizar una funcion que devuelva un valor booleano indicando si un numero que se le pasa por argumento es o no un
numero perfecto. Un numero perfecto es aquel que es igual a la suma de sus divisores incluyendo el uno y excluyendo al un
numero mismo. 
Utilizando esta funcion realizar un programa que escriba a lista de los numeros "perfectos" hasta uno dado, introducido
como dato del programa"""

import argparse
import pprint

# funcion que devuelve los divisores de un numero que se le pasa como parametro
def divisores(n):
    lista_divisores = [e for e in range(1, n) if n % e == 0]
    return lista_divisores


# funcion que utilizando la funcion "divisores", determina si un numero es perfecto o no
def esPerfecto(n):
    suma_divisores = 0
    for e in divisores(n):
        suma_divisores += e
    return suma_divisores == n


if __name__ == "__main__":

    parser = argparse.ArgumentParser(description="introducir numero")
    parser.add_argument(dest="target", help="target number", required=True, type=int)
    params = parser.parse_args()

    lista_perfectos = [e for e in range(params.target) if esPerfecto(e)]
    pprint.pprint(lista_perfectos)

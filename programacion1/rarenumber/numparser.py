

# funcion para descomponer un entero en sus digitos 

def parserNumber (number:int)->list:
    num_parsed= [n for n in reversed(str(number))]
    return [int(element) for element in num_parsed]

# transforma un vector de enteros en un numero entero
def vectorToInt (int_vector:list)->int:
    aux = 0;
    for i , value in enumerate (int_vector):
        aux += pow(10,i)
    return aux

# determina si la suma de los digitos de un numero n es igual a N
def suma (n:int, N:int)->bool:
    return (sum(parserNumber(n)) == N)    



if __name__ == '__main__':

    result = []
    for i in range(1, 12):
        if suma(i,12):
            result.append(i)
    
    # sacamos el resultado en pantalla
    for element in result:
        print(f"{element}")
            


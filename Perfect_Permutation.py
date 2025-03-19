n=int(input())
#verificamos si n es impar
if n%2!=0:
    print('-1')
else:
    permutation=[]
    for i in range(1,n+1):
        if i%2!=0:
            permutation.append(i+1)
        else:
            permutation.append(i-1)
    print(" ".join(map(str,permutation)))

"""Buscamos la permutacion Perfecta lo que significa que estamos buscando la secuencia de n numeros que no esten es sus posiciones originales, ejemplo:
    6 -> 1 2 3 4 5 6
iniciamos con que 6 es par por lo que es una permutacion perfecta, para continuar con la secuencia de la permutacion tenemos que intercambiarlos, de la forma que los impares aumentan uno y pares decrementan 1.
[1+1,2-1,3+1,4-1,5+1,6-1] teniendo la permutacion perfecta de la forma ->
[ 2,1,4,3,6,5]"""


t = int(input())
# Lee un número entero de la entrada del usuario y lo almacena en la variable 't'.

for _ in range(t):
    # Inicia un bucle 'for' que se ejecutará 't' veces, una vez para cada test case.

    a, b, c = map(int, input().split())
    # Lee una línea de entrada del usuario.
    if a == b:
        # Comprueba si el valor de la variable 'a' es igual al valor de la variable 'b'.
        print(c)
        # Si 'a' y 'b' son iguales, imprime el valor de la variable 'c'.

    elif a == c:
        # Si la condición anterior (a == b) es falsa, esta condición comprueba si el valor
        # de la variable 'a' es igual al valor de la variable 'c'.
        print(b)
        # Si 'a' y 'c' son iguales, imprime el valor de la variable 'b'.

    else:
        # Si ninguna de las condiciones anteriores (a == b o a == c) es verdadera,

        print(a)
        # En este caso, imprime el valor de la variable 'a'.
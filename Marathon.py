t = int(input())

for _ in range(t):
   

    a, b, c, d = map(int, input().split())

    count = 0
    # Inicializa una variable llamada 'count' en 0.
    # Esta variable se utilizará para contar cuántos de los números b, c y d son mayores que a.

    if b > a:
        # Comprueba si el valor de la variable 'b' es mayor que el valor de la variable 'a'.
        count += 1
        # Si 'b' es mayor que 'a', incrementa el valor de la variable 'count' en 1.

    if c > a:
        # Comprueba si el valor de la variable 'c' es mayor que el valor de la variable 'a'.
        count += 1
        # Si 'c' es mayor que 'a', incrementa el valor de la variable 'count' en 1.

    if d > a:
        # Comprueba si el valor de la variable 'd' es mayor que el valor de la variable 'a'.
        count += 1
        # Si 'd' es mayor que 'a', incrementa el valor de la variable 'count' en 1.

    print(count)
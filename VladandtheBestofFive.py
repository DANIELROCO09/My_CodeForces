t = int(input())

for _ in range(t):
    # Inicia un bucle 'for' que se ejecutará 't' veces, una vez por cada caso de prueba.

    s = input().strip()
    # Lee una línea de entrada del usuario para el caso de prueba actual y la guarda en la variable 's'.
    
    count_a = s.count('A')
    # Cuenta el número de veces que aparece el carácter 'A' en la cadena 's' y guarda el resultado en la variable 'count_a'.

    count_b = s.count('B')
    # Cuenta el número de veces que aparece el carácter 'B' en la cadena 's' y guarda el resultado en la variable 'count_b'.

    if count_a > count_b:
        # Comprueba si el número de 'A' es estrictamente mayor que el número de 'B'.
        print('A')
        # Si la condición es verdadera 

    else:
        # Si la condición del 'if' no se cumple
        print('B')
       
        
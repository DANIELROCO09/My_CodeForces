n = int(input())
feeling = []
for i in range(1, n + 1):

    if i % 2 == 1:
        # Comprueba si el valor actual de 'i' es impar (el resto de la división entre 2 es 1).
        feeling.append("I hate")
        # Si 'i' es impar, añade la cadena "I hate" al final de la lista 'feeling'.
    else:
        # Si la condición anterior (i % 2 == 1) es falsa, significa que 'i' es par.
        feeling.append("I love")
        # Si 'i' es par, añade la cadena "I love" al final de la lista 'feeling'.

    if i != n:
        # Comprueba si el valor actual de 'i' no es igual a 'n' (es decir, no es la última iteración).
        feeling.append("that")
        # Si no es la última iteración, añade la cadena "that" al final de la lista 'feeling'.
    else:
        # Si la condición anterior (i != n) es falsa, significa que es la última iteración (i es igual a n).
        feeling.append("it")
        # Si es la última iteración, añade la cadena "it" al final de la lista 'feeling'.

print(' '.join(feeling))
"""El problema nos pide encontrar el número mínimo de movimientos necesarios para mover el único 1 en una matriz 5x5 hasta la posición central (fila 3, columna 3). 
Los movimientos permitidos son intercambiar filas o columnas adyacentes."""

for i in range(1, 6):
    row = list(map(int, input().split()))
    for j in range(1, 6):
        if row[j-1] == 1:
            print(abs(i - 3) + abs(j - 3))
            exit()


"""
    Lectura de la Matriz: Lee las 5 filas de la matriz.

    Búsqueda del 1: Para cada elemento de la matriz, verifica si es igual a 1.

    Cálculo de la Distancia: Cuando encuentra el 1, calcula su posición actual (i, j) hasta la posición central (3, 3) como abs(i - 3) + abs(j - 3).

    Salida Inmediata: Imprime el resultado y termina el programa, ya que solo hay un 1 en la matriz.
"""
"""
Caso 2:
    El 1 está en la posición (3, 2).

    Distancia: abs(3 - 3) + abs(2 - 3) = 0 + 1 = 1.

    Resultado: 1.
"""

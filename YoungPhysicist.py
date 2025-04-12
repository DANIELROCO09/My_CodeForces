n = int(input())

sum_x = 0
sum_y = 0
sum_z = 0

for _ in range(n):
    # Inicia un bucle 'for' que se ejecutará 'n' veces.
    x, y, z = map(int, input().split())
    # Lee una línea de entrada del usuario.
    sum_x += x
    # Suma el valor de la componente x del vector actual a la variable 'sum_x'.

    sum_y += y
    # Suma el valor de la componente y del vector actual a la variable 'sum_y'.

    sum_z += z
    # Suma el valor de la componente z del vector actual a la variable 'sum_z'.

if sum_x == 0 and sum_y == 0 and sum_z == 0:
    # Después de leer y sumar todas las componentes de los 'n' vectores,
    # esta condición verifica si la suma de todas las componentes x, y, z es igual a 0.
    print("YES")
else:#caso contrario
    print("NO")
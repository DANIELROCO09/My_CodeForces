#Magnets
"""Teniendo un arreglo de n elementos, se busca la secuencia solamente rompiendose cuando el
elemento anterior es distinto al siguiente"""

n = int(input())
groups = 1

prev_magnet = input().strip()
# Lee la siguiente línea de entrada 

for _ in range(1, n):

    current_magnet = input().strip()
    # Dentro del bucle, lee la siguiente línea de entrada (representando el imán actual)
    # y elimina cualquier espacio en blanco al principio o al final.

    if current_magnet != prev_magnet:
        # Compara la orientación del 'current_magnet' con la del 'prev_magnet'.
        

        groups += 1
        # Incrementa el contador de 'groups' en 1, ya que hemos encontrado un nuevo grupo.

        prev_magnet = current_magnet
        # Actualiza la variable 'prev_magnet' con la orientación del 'current_magnet'.
        

print(groups)
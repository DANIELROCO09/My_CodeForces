from itertools import combinations

def min_digits_to_remove(n_str):
    length = len(n_str)
    min_cost = float('inf')
    min_remove = length  # El peor caso es eliminar todos menos uno

    for l in range(1, length + 1):  # Tamaños de subsecuencias
        for indices in combinations(range(length), l):
            sub = ''.join(n_str[i] for i in indices)
            num = int(sub)
            digit_sum = sum(int(d) for d in sub)
            if digit_sum == 0:
                continue  # evitar división por cero
            cost = num / digit_sum
            if cost < min_cost:
                min_cost = cost
                min_remove = length - l  # cuantos dígitos se eliminaron

    return min_remove

# Entrada y salida
t = int(input())
for _ in range(t):
    n = input().strip()
    print(min_digits_to_remove(n))

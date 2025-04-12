t = int(input())
for _ in range(t):
    n = int(input())
    responses = []
    for i in range(n):
        a, b = map(int, input().split())
        if a <= 10:
            responses.append((b, i + 1))  # Guardamos calidad e índice
    # Encontrar la respuesta con la calidad máxima
    winner = max(responses)
    print(winner[1])
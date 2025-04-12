t = int(input())
for _ in range(t):
    grid = [input().strip() for _ in range(8)]
    word = []
    for col in range(8):
        column_chars = []
        for row in range(8):
            char = grid[row][col]
            if char != '.':
                column_chars.append(char)
        if column_chars:
            word = column_chars
            break  # Asumimos que solo una columna tiene letras
    print(''.join(word))
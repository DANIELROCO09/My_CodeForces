n = int(input())

while n > 0:
    a,b,c = map(int,input().split())
    
    if (a + b >= 10) or (a + c >= 10) or (b + c >= 10):
        print('YES')
    else:
        print('NO')
    
    n -= 1  # Importante: decrementar n para evitar bucle infinito

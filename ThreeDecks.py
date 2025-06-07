t = int(input())
for _ in range(t):
    a, b, c = map(int, input().split())
    total = a + b + c
    if total % 3 != 0:
        print("NO")
    else:
        x = total // 3
        if x < a or x < b:
            print("NO")
        else:
            print("YES")

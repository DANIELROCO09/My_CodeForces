t = int(input())
target = {'T', 'i', 'm', 'u', 'r'}
for _ in range(t):
    n = int(input())
    s = input().strip()
    if n != 5:
        print("NO")
    else:
        if set(s) == target and all(s.count(c) == 1 for c in s):
            print("YES")
        else:
            print("NO")

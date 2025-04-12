def solve():
    n = int(input())
    s = input()
    n_minus = s.count('-')
    n_underscore = s.count('_')
    ans = (n_minus // 2) * n_underscore * ((n_minus + 1) // 2)
    print(ans)

t = int(input())
for _ in range(t):
    solve()
def solve():
    p = input()
    s = input()
    n = len(p)
    m = len(s)

    if m < n:
        print("NO")
        return

    for i in range(m - n + 1):
        sub_s = s[i : i + n]
        possible = True
        for j in range(n):
            if p[j] == 'L':
                if sub_s[j] != 'L' and sub_s[j] != 'LL':
                    possible = False
                    break
            elif p[j] == 'R':
                if sub_s[j] != 'R' and sub_s[j] != 'RR':
                    possible = False
                    break
        if possible:
            print("YES")
            return

    print("NO")

t = int(input())
for _ in range(t):
    solve()
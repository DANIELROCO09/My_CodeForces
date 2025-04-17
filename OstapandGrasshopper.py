def solve():
    n, k = map(int, input().split())
    s = input()
    g_index = -1
    t_index = -1
    for i in range(n):
        if s[i] == 'G':
            g_index = i
        elif s[i] == 'T':
            t_index = i

    if g_index == -1 or t_index == -1:
        print("NO")
        return

    if g_index < t_index:
        for i in range(g_index, n, k):
            if i == t_index:
                print("YES")
                return
            if s[i] == '#':
                print("NO")
                return
        print("NO")
    elif g_index > t_index:
        for i in range(g_index, -1, -k):
            if i == t_index:
                print("YES")
                return
            if s[i] == '#':
                print("NO")
                return
        print("NO")
    else:
        print("YES")

if __name__ == "__main__":
    solve()
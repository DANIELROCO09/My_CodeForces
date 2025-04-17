def solve():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    mn = min(a)
    total = 0
    a.sort()
    for i in range(n):
        diff = k - a[i]
        if i > 0:
            total += (diff // a[0])
    print(total)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()
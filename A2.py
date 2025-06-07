t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    distinct_elements = len(set(a))
    print(distinct_elements)
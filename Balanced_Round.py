t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    problems = list(map(int, input().split()))
    a = sorted(problems)

    if not a:
        print(0)
    elif len(a) == 1:
        print(0)  # Si solo hay un problema, no eliminamos ninguno para tener 1
    else:
        max_len = 1
        current_len = 1
        for i in range(len(a) - 1):
            if abs(a[i + 1] - a[i]) <= k:
                current_len += 1
            else:
                max_len = max(max_len, current_len)
                current_len = 1
        max_len = max(max_len, current_len)
        problems_to_remove = n - max_len
        print(problems_to_remove)
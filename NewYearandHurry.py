n, k = map(int, input().split())
time_left = 240 - k
problems_solved = 0
time_needed = 0
for i in range(1, n + 1):
    time_needed += 5 * i
    if time_needed <= time_left:
        problems_solved += 1
    else:
        break
print(problems_solved)
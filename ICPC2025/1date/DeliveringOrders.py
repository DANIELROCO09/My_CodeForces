K = int(input())
inventory = list(map(int, input().split()))
N = int(input())
orders = [list(map(int, input().split())) for _ in range(N)]

day = 1
while True:
    can_fulfill = True
    for i in range(N):
        order_fulfilled = True
        for j in range(K):
            if orders[i][j] > inventory[j]:
                order_fulfilled = False
                break
        if order_fulfilled:
            for j in range(K):
                inventory[j] -= orders[i][j]
        else:
            print(day, i + 1)
            exit()
    day += 1


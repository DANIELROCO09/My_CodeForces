N,M=map(int,input().split())
boxes=list(map(int,input().split()))

for i in range(N):
    if boxes[i]>=M:
        print(i+1)
        break
    else:
        print('-1')
        break

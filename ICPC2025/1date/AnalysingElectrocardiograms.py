S=input().strip()
N=int(input())

for _ in range(N):
    P=input().strip()

    if len(P)%len(S)!=0:
        print('No')
    else:
        k=len(P)//len(S)
        if P==S*k:
            print('Yes')
        else:
            print('No')




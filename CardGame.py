def game(a,b):
    if (a>b): return 1
    if (a==b): return 0
    if (a<b): return -1

for i in range(int(input())):
    a,b,c,d = map(int,input().split())
    t=0
    if game(a,c) + game(b,d) > 0:
        t+=1
    if game(a,d) + game(b,c) > 0:
        t+=1
    if game(b,c) + game(a,d) > 0:
        t+=1
    if game(b,d) + game(a,c) > 0:
        t+=1
    print(t)

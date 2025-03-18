def primo(num):
    if num<2:
        return False
    for i in range(2,int(num**0.5)+1):
        if num%i==0:
            return False
    return True

def next(num):
    a=n+1
    while True:
        if primo(a):
            return a
        a+=1
n,m=map(int,input().split())

if primo(m) and m==next(n):
    print('YES')
else:
    print('NO')

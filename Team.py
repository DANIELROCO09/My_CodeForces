t=int(input())
count=0
for _ in range(t):
	a,b,c=map(int,input().split())
	suma=a+b+c
	if suma>1:
		count+=1
	
print(count)

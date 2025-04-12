t=int(input())#numero de casos

for _ in range(t):
	n=input()

	if len(n)<=10:
		print(n)
	else:
		print(n[0]+str(len(n)-2)+n[-1])

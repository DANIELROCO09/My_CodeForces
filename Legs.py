t = int(input())
for _ in range(t):
	n=int(input())
	cow=n/4
	if n%4 == 0:
		print(int(cow))
	else:
		print(int(cow+1))
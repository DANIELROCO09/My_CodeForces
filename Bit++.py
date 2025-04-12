t = int(input())
count=0
for _ in range(t):
	s=input()
	if '++' in s:
		count+=1
	elif '--' in s:
		count-=1
print(count)
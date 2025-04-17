def funtion(n):
	if n%2==0:
		return n/2
	else:
		s=((n-1)/2)
		return s-n


if __name__ == "__main__":
		n=int(input())
		print(int(funtion(n)))
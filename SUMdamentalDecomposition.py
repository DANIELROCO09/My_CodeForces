import sys

def solution():
    n, x = map(int, sys.stdin.readline().split())
    bits = bin(x).count('1')
    
    if n <= bits:
        print(x, end='')
        return
    if (n - bits) % 2 == 0:
        print(x + n - bits, end='')
    else:
        if x > 1:
            print(x + n - bits + 1, end='')
            return
        if x == 1:
            print(n + 3, end='')
            return
        else:
            if n == 1:
                print(-1, end='')
                return
            else:
                print(n + 3, end='')

def main():
    t = int(sys.stdin.readline())
    for _ in range(t):
        solution()
        print()

if __name__ == "__main__":
    main()

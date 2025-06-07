import sys

def main():
    input = sys.stdin.read().split()
    ptr = 0
    t = int(input[ptr])
    ptr += 1
    for _ in range(t):
        n = int(input[ptr])
        m = int(input[ptr + 1])
        k = int(input[ptr + 2])
        ptr += 3
        
        v1 = list(map(int, input[ptr:ptr + n]))
        ptr += n
        
        ans = 0
        for _ in range(m):
            o = int(input[ptr])
            ptr += 1
            for num in v1:
                if (o + num) <= k:
                    ans += 1
        
        print(ans)

if __name__ == "__main__":
    main()

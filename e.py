import sys

def solve():
    input = sys.stdin.read().split()
    ptr = 0
    t = int(input[ptr])
    ptr += 1
    results = []
    for _ in range(t):
        n, k = map(int, input[ptr:ptr+2])
        ptr += 2
        a = list(map(int, input[ptr:ptr+n]))
        ptr += n
        
        def is_possible(x):
            if x == 0:
                return True
            required = set(range(x))
            current = set()
            count = 0
            for num in a:
                if num in required:
                    current.add(num)
                if current == required:
                    count += 1
                    current = set()
                    if count >= k:
                        return True
            return count >= k
        
        low = 0
        high = n
        best = 0
        while low <= high:
            mid = (low + high) // 2
            if is_possible(mid):
                best = mid
                low = mid + 1
            else:
                high = mid - 1
        results.append(best)
    print('\n'.join(map(str, results)))

solve()
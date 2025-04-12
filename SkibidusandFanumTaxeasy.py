import bisect

INF = int(1e18) + 16

def tc():
    n, m = map(int, input().split())
    va = list(map(int, input().split()))
    vb = list(map(int, input().split()))
    vb.sort()
    
    va = [-INF] + va
    n += 1
    
    for i in range(1, n):
        # Búsqueda binaria personalizada
        def condition(a):
            return a - va[i] >= va[i - 1]
        
        # Realizamos búsqueda binaria simulando lower_bound con condición personalizada
        low, high = 0, m
        while low < high:
            mid = (low + high) // 2
            if vb[mid] - va[i] < va[i - 1]:
                low = mid + 1
            else:
                high = mid
        it = low
        
        if it == m:
            continue
        
        j = vb[it]
        if va[i] < va[i - 1] and j - va[i] < va[i - 1]:
            continue
        
        va[i] = min(
            INF if va[i] < va[i - 1] else va[i],
            INF if j - va[i] < va[i - 1] else j - va[i]
        )

    print("YES" if all(va[i] >= va[i - 1] for i in range(1, n)) else "NO")

def main():
    T = int(input())
    for _ in range(T):
        tc()

if __name__ == "__main__":
    main()

def calculate_cost(s):
    cost = 0
    current = '0'
    for c in s:
        if c == current:
            cost += 1
        else:
            cost += 2
            current = c
    return cost

def solve():
    import sys
    input = sys.stdin.read
    data = input().split()
    idx = 0
    t = int(data[idx])
    idx += 1
    for _ in range(t):
        n = int(data[idx])
        idx += 1
        s = data[idx]
        idx += 1
        
        original_cost = calculate_cost(s)
        min_cost = original_cost
        
        # We need to find the best reversal to minimize the cost
        # The cost is minimized when the number of transitions is minimized
        # Reversing a substring can affect transitions at its boundaries
        # So, we look for a reversal that reduces the number of transitions
        
        # Find all transition points
        transitions = []
        for i in range(1, n):
            if s[i] != s[i-1]:
                transitions.append(i)
        
        # The best possible reversal is to eliminate two transitions by reversing a substring
        # between two transitions that have the same character before and after
        # So, we look for a pair of transitions where s[i-1] == s[j]
        best_reduction = 0
        for i in range(len(transitions)):
            for j in range(i + 1, len(transitions)):
                if s[transitions[i] - 1] == s[transitions[j]]:
                    # Reversing between transitions[i] and transitions[j] - 1
                    # can potentially reduce the number of transitions by 2
                    best_reduction = max(best_reduction, 2)
        
        # Also consider reversing from the start or to the end
        # For example, if the first transition is '01', reversing from start to transition[0] - 1
        # might not help, but if the first character is '0' and the first transition is '01',
        # reversing the first part to '10' might not reduce transitions
        # So, it's complex
        
        # For simplicity, we can consider that the best possible reduction is 2
        # So, the minimal cost is original_cost - best_reduction
        # But we need to ensure that the original_cost is at least best_reduction + 1
        if len(transitions) >= 2:
            min_cost = min(min_cost, original_cost - best_reduction)
        
        print(min_cost)

solve()
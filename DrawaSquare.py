import sys

def is_square(l, r, d, u):
    # The four points are:
    L = (-l, 0)
    R = (r, 0)
    D = (0, -d)
    U = (0, u)

    # Collect all squared distances
    distances = [
        (L[0] - R[0])**2 + (L[1] - R[1])**2,  # LR
        (L[0] - D[0])**2 + (L[1] - D[1])**2,  # LD
        (L[0] - U[0])**2 + (L[1] - U[1])**2,  # LU
        (R[0] - D[0])**2 + (R[1] - D[1])**2,  # RD
        (R[0] - U[0])**2 + (R[1] - U[1])**2,  # RU
        (D[0] - U[0])**2 + (D[1] - U[1])**2   # DU
    ]

    distances.sort()

    # A square should have 4 equal sides and 2 equal diagonals
    return distances[0] == distances[1] == distances[2] == distances[3] and distances[4] == distances[5]

# Read input
input = sys.stdin.read
data = input().split("\n")
t = int(data[0])  # Number of test cases

# Process each test case
results = []
for i in range(1, t + 1):
    if data[i].strip():
        l, r, d, u = map(int, data[i].split())
        results.append("Yes" if is_square(l, r, d, u) else "No")

# Print all results
sys.stdout.write("\n".join(results)+"\n")
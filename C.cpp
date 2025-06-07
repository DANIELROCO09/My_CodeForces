#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> grid[i][j];
            }
        }

        vector<int> p(2 * n + 1, 0); // p[1..2n]
        unordered_set<int> seen;

        // Collect all unique elements from the grid
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                seen.insert(grid[i][j]);
            }
        }

        // Determine p_1 as the missing number in 1..2n
        int p1 = 0;
        for (int num = 1; num <= 2 * n; ++num) {
            if (seen.find(num) == seen.end()) {
                p1 = num;
                break;
            }
        }
        p[1] = p1;

        // Now, for each k from 2 to 2n, find p_k
        for (int k = 2; k <= 2 * n; ++k) {
            // Find any i,j such that i + j = k (1-based)
            // Since i and j are 1-based in the grid, but stored as 0-based in the vector
            // So i ranges from 1 to n, j ranges from 1 to n, i + j = k
            // We can take i from max(1, k - n) to min(n, k - 1)
            int i = max(1, k - n);
            int j = k - i;
            // Convert to 0-based indices
            p[k] = grid[i - 1][j - 1];
        }

        // Output p_1 to p_{2n}
        for (int i = 1; i <= 2 * n; ++i) {
            cout << p[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}
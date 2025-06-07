#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<vector<int>> grid(n, vector<int>(m));
        int current = 1;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                grid[i][j] = current;
                current = current % k + 1;
            }
            if (m % k != 0) {
                current = grid[i][0] % k + 1;
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << grid[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
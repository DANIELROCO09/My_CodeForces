#include <bits/stdc++.h>
using namespace std;

int min_operations(const string &s) {
    int n = s.size();
    int cost = 0;
    char finger = '0';

    auto compute_cost = [&](const string &t) -> int {
        char current = '0';
        int op = 0;
        for (char c : t) {
            if (c != current) {
                op++;
                current = c;
            }
            op++;
        }
        return op;
    };

    int min_cost = compute_cost(s);

    for (int l = 0; l < n; ++l) {
        for (int r = l; r < n; ++r) {
            string t = s;
            reverse(t.begin() + l, t.begin() + r + 1);
            min_cost = min(min_cost, compute_cost(t));
        }
    }

    return min_cost;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << min_operations(s) << endl;
    }
    return 0;
}

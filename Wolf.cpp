#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> p(n + 1);
    vector<int> pos(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
        pos[p[i]] = i;
    }
    
    while (q--) {
        int l, r, x;
        cin >> l >> r >> x;
        int x_pos = pos[x];
        if (x_pos < l || x_pos > r) {
            cout << -1 << '\n';
            continue;
        }
        
        int low = l, high = r;
        int d = 0;
        bool possible = true;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (mid == x_pos) {
                break;
            } else if (mid < x_pos) {
                if (p[mid] > x) {
                    d++;
                }
                low = mid + 1;
            } else {
                if (p[mid] < x) {
                    d++;
                }
                high = mid - 1;
            }
        }
        cout << d << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

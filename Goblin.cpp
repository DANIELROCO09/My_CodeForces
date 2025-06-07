#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int c0 = count(s.begin(), s.end(), '0');
    int c1 = n - c0;
    
    if (c0 == n) {
        cout << n << '\n';
        return;
    }
    if (c1 == n) {
        cout << (n >= 1 ? 1 : 0) << '\n';
        return;
    }
    
    cout << (long long)c0 * c1 + c1 << '\n';
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

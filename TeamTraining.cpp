#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    
    int teams = 0;
    int current = 0;
    
    for (int i = 0; i < n; ++i) {
        current++;
        if (a[i] * current >= x) {
            teams++;
            current = 0;
        }
    }
    
    cout << teams << endl;
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

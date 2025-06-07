#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        vector<long long> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end(), greater<long long>());
        
        vector<long long> prefix(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefix[i + 1] = prefix[i] + sorted_a[i];
        }
        
        for (int k = 1; k <= n; ++k) {
            cout << prefix[k] << " ";
        }
        cout << "\n";
    }
}

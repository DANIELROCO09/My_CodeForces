#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int& x : a) cin >> x;

        int total_gcd = a[0];
        for (int i = 1; i < n; ++i)
            total_gcd = gcd(total_gcd, a[i]);

        // Try to move one element into a different group and check GCDs
        bool found = false;
        for (int i = 0; i < n; ++i) {
            vector<int> B, C;
            B.push_back(a[i]);
            for (int j = 0; j < n; ++j) {
                if (j != i) C.push_back(a[j]);
            }

            int gcd_B = B[0];
            int gcd_C = C[0];
            for (int k = 1; k < C.size(); ++k)
                gcd_C = gcd(gcd_C, C[k]);

            if (gcd_B != gcd_C) {
                cout << "Yes\n";
                for (int j = 0; j < n; ++j) {
                    if (j == i) cout << "1 ";
                    else cout << "2 ";
                }
                cout << '\n';
                found = true;
                break;
            }
        }

        if (!found) cout << "No\n";
    }

    return 0;
}
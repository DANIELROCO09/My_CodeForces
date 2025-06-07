#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        sort(a.begin(), a.end());
        
        long long answer = 0;
        for (int i = 0; i < n; ++i) {
            long long total = 0;
            for (int j = i; j < n && a[j] - a[i] <= k; ++j) {
                total += a[j];
            }
            answer = max(answer, total);
        }

        if (answer % 2 == 1)
            cout << "Tom\n";
        else
            cout << "Jerry\n";
    }
    return 0;
}

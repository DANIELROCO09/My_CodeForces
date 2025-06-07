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
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        vector<int> bit_counts(30, 0);
        for (int num : a) {
            for (int bit = 0; bit < 30; ++bit) {
                if (num & (1 << bit)) {
                    bit_counts[bit]++;
                }
            }
        }

        long long max_value = 0;

        for (int num : a) {
            long long current_sum = 0;
            for (int bit = 0; bit < 30; ++bit) {
                if (num & (1 << bit)) {
                    current_sum += (long long)(n - bit_counts[bit]) * (1LL << bit);
                } else {
                    current_sum += (long long)bit_counts[bit] * (1LL << bit);
                }
            }
            max_value = max(max_value, current_sum);
        }

        cout << max_value << '\n';
    }

    return 0;
}
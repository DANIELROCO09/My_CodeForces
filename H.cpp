#include <bits/stdc++.h>
using namespace std;

const int MAXA = 100005;
vector<int> spf(MAXA);  // smallest prime factor

// Sieve of Eratosthenes for prime factorization
void sieve() {
    for (int i = 2; i < MAXA; ++i) {
        if (spf[i] == 0) {
            for (int j = i; j < MAXA; j += i) {
                if (spf[j] == 0) spf[j] = i;
            }
        }
    }
}

// Fast factorization using smallest prime factor
vector<int> getPrimeFactors(int x) {
    vector<int> factors;
    while (x > 1) {
        int p = spf[x];
        factors.push_back(p);
        while (x % p == 0) x /= p;
    }
    return factors;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; ++i) cin >> a[i];

        while (q--) {
            int k, l, r;
            cin >> k >> l >> r;
            long long ans = 0;

            for (int i = l; i <= r; ++i) {
                while (k % a[i] == 0 && a[i] != 1) {
                    k /= a[i];
                }
                ans += k;
                if (k == 1) {
                    ans += 1LL * (r - i) * k;
                    break;
                }
            }

            cout << ans << '\n';
        }
    }

    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        ll c;
        cin >> n >> c;
        vector<ll> s(n);  // Cambiado a ll para evitar desbordamientos
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
        }

        ll low = 1;
        // Mejor límite superior: sqrt(c) + máx(s[i]) / 2
        ll upper = sqrt(c) + *max_element(s.begin(), s.end()) / 2 + 1;
        ll ans = -1;

        while (low <= upper) {
            ll mid = low + (upper - low) / 2;
            ll total = 0;
            bool overflow = false;

            for (auto side : s) {
                // Calcula (side + 2*mid)^2 verificando desbordamiento
                ll term = side + 2 * mid;
                if (term > LLONG_MAX / term) {  // Verifica si term*term desborda
                    overflow = true;
                    break;
                }
                total += term * term;
                if (total > c) {  // Si total supera c, no necesitamos seguir sumando
                    overflow = true;
                    break;
                }
            }

            if (overflow) {
                upper = mid - 1;
            } else if (total == c) {
                ans = mid;
                break;
            } else if (total < c) {
                low = mid + 1;
            } else {
                upper = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
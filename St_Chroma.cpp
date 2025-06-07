//St. Chroma
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> p;

    // Poner de x+1 a n-1 al inicio (evitando los valores 0..x)
    for (int i = x + 1; i < n; ++i) {
        p.push_back(i);
    }

    // Luego pon 0..x-1
    for (int i = 0; i < x; ++i) {
        p.push_back(i);
    }

    // Luego x
    p.push_back(x);

    // Finalmente pon x+1 hasta n-1 si faltó alguno
    for (int i = p.size(); i < n; ++i) {
        p.push_back(i);
    }

    for (int v : p) cout << v << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


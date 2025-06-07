//Cherry Bomb
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    int x = -1;
    bool possible = true;

    // Detectamos el valor x = a[i] + b[i] si hay b[i] conocidos
    for (int i = 0; i < n; ++i) {
        if (b[i] != -1) {
            int current_x = a[i] + b[i];
            if (x == -1) {
                x = current_x;
            } else if (current_x != x) {
                possible = false;
                break;
            }
        }
    }

    if (!possible) {
        cout << 0 << endl;
        return;
    }

    if (x == -1) {
        // Todos los b[i] son -1: debemos hallar los valores de x posibles
        // Para cada a[i], b[i] = x - a[i] debe estar en [0, k]
        // Entonces: x ∈ [a[i], a[i] + k] para cada i
        // La intersección de todos estos rangos es:
        int min_possible_x = *max_element(a.begin(), a.end());
        int max_possible_x = *min_element(a.begin(), a.end()) + k;

        if (min_possible_x > max_possible_x) {
            cout << 0 << endl;
        } else {
            cout << max_possible_x - min_possible_x + 1 << endl;
        }
    } else {
        // Ya tenemos un x fijo, verificamos si se pueden completar los -1
        for (int i = 0; i < n; ++i) {
            if (b[i] == -1) {
                int bi = x - a[i];
                if (bi < 0 || bi > k) {
                    possible = false;
                    break;
                }
            }
        }
        cout << (possible ? 1 : 0) << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


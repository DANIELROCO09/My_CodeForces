#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;
        
    // Verificar si es posible alcanzar la suma k
        if (k < -n * p || k > n * p) {
            cout << -1 << endl;
            continue;
        }
        
    // Calcular el número mínimo de operaciones
        int operations = (abs(k) + p - 
        operations = min(operations, n);
        
        cout << operations << endl;
    }
    return 0;
}

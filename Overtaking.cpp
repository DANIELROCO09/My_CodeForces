#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        
        int overtakes = 0;
        long long sumA = 0, sumB = 0;
        int prev_leader = 0; // 0: tie, 1: A leads, 2: B leads
        
        for (int i = 0; i < n; ++i) {
            sumA += a[i];
            sumB += b[i];
            
            int current_leader;
            if (sumA > sumB) current_leader = 1;
            else if (sumB > sumA) current_leader = 2;
            else current_leader = 0;
            
            // Solo contar adelantamiento si hubo un cambio real de liderazgo
            if ((prev_leader == 1 && current_leader == 2) || 
                (prev_leader == 2 && current_leader == 1)) {
                overtakes++;
            }
            
            // Actualizar el líder anterior solo si no es empate
            if (current_leader != 0) {
                prev_leader = current_leader;
            }
        }
        
        cout << overtakes << endl;
    }
    return 0;
}
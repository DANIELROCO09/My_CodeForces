#include <iostream>
#include <vector>
#include <deque>

using namespace std;

// Función principal
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        // Inicializamos la longitud mínima del subarreglo como un valor grande
        int min_length = n + 1;
        
        // Usamos una ventana deslizante para recorrer el arreglo
        for (int l = 0; l < n; ++l) {
            int current_xor = a[l];
            for (int r = l; r < n; ++r) {
                if (r > l) {
                    current_xor = current_xor ^ a[r]; // XOR entre los elementos
                }
                
                // Si encontramos un subarreglo cuya belleza es mayor o igual a k, actualizamos la longitud
                if (current_xor >= k) {
                    min_length = min(min_length, r - l + 1);
                    break; // No necesitamos seguir con r más grande, porque ya encontramos el mínimo subarreglo
                }
            }
        }
        
        // Si no encontramos ningún subarreglo con belleza >= k, retornamos -1
        if (min_length == n + 1) {
            cout << -1 << endl;
        } else {
            cout << min_length << endl;
        }
    }
    
    return 0;
}

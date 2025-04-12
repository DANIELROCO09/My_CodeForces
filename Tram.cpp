#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int current = 0; // Pasajeros actuales en el tranvía
    int max_capacity = 0; // Capacidad máxima necesaria
    
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        
        current -= a; // Pasajeros que bajan
        current += b; // Pasajeros que suben
        
        // Actualizar la capacidad máxima si es necesario
        if(current > max_capacity) {
            max_capacity = current;
        }
    }    
    cout << max_capacity << endl;
    return 0;
}

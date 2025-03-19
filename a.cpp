#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Leer el número de partes
    string s;
    for(int i = 0; i < n; i++) {
        cin >> s;  // Leer cada parte del texto
    }

    // El número mínimo de veces que se presionó "Enter"
    cout << n - 1 << endl;

    return 0;
}


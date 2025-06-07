#include <bits/stdc++.h>
using namespace std;

int main() {
    int casos;
    cin >> casos;

    while (casos--) {
        string p;
        cin >> p;
        transform(p.begin(), p.end(), p.begin(), ::toupper); // Convertir a mayúsculas
        cout << (p == "YES" ? "YES" : "NO") << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        
        long long total = a + b + c;
        if (total % 3 != 0) {
            cout << "NO\n";
            continue;
        }
        
        long long x = total / 3;
        
        if (x < a || x < b) {
            cout << "NO\n";
            continue;
        }
        
        cout << "YES\n";
    }
    return 0;
}

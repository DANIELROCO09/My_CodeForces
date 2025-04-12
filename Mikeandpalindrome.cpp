#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    int discrepancies = 0;
    
    for (int i = 0; i < s.length() / 2; ++i) {
        if (s[i] != s[s.length() - 1 - i]) {
            discrepancies++;
        }
    }
    
    if (discrepancies == 1 || (discrepancies == 0 && s.length() % 2 == 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
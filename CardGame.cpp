#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string cards;
        cin >> cards;
        
        bool aliceHasOne = false;
        for (int i = 0; i < n; ++i) {
            if (cards[i] == 'A' && i == 0) {
                aliceHasOne = true;
                break;
            }
        }
        
        if (aliceHasOne) {
            cout << "Alice" << endl;
            continue;
        }
        
        bool aliceWins = false;
        for (int i = 0; i < n; ++i) {
            if (cards[i] == 'A') {
                if (i > 0 && cards[i-1] == 'B') {
                    aliceWins = true;
                    break;
                }
                if (i < n-1 && cards[i+1] == 'B') {
                    aliceWins = true;
                    break;
                }
            }
        }
        
        if (aliceWins) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }
    return 0;
} 
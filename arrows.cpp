#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> balloons(n);
    for (int i = 0; i < n; ++i) {
        cin >> balloons[i];
    }

    unordered_map<int, int> arrows;
    int new_arrows = 0;

    for (int h : balloons) {
        if (arrows[h] > 0) {
            arrows[h]--;
        } else {
            new_arrows++;  //nueva flecha obtuvimos
        }
        arrows[h - 1]++;
    }

    cout << new_arrows << endl;
    return 0;
}

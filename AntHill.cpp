#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long currentAnts = 0;
    long long minInitialAnts = 0;

    for (int i = 0; i < n; ++i) {
        currentAnts += a[i];
        if (currentAnts < 0) {
            minInitialAnts += -currentAnts;
            currentAnts = 0;
        }
    }

    cout << minInitialAnts << endl;

    return 0;
}

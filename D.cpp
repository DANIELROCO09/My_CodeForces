#include <iostream>
#include <string>

using namespace std;

bool solve(const string &p, const string &s) {
    int n = p.size();
    int m = s.size();
    if (m < n || m > 2 * n) {
        return false;
    }
    int i = 0, j = 0;
    while (i < n && j < m) {
        char current_p = p[i];
        if (s[j] != current_p) {
            return false;
        }
        int count = 0;
        while (j < m && s[j] == current_p) {
            count++;
            j++;
        }
        if (count != 1 && count != 2) {
            return false;
        }
        i++;
    }
    return i == n && j == m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;
        if (solve(p, s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

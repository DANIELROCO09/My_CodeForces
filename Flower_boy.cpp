//Flower Boy
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canCollect(const vector<int>& a, const vector<int>& b) {
    int i = 0, j = 0;
    int n = a.size();
    int m = b.size();
    while (i < n && j < m) {
        if (a[i] >= b[j]) {
            j++;
        }
        i++;
    }
    return j == m;
}

int solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    sort(b.begin(), b.end());

    if (canCollect(a, b)) {
        return 0;
    }

    int left = 1, right = 1e9;
    int answer = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        bool possible = false;
        for (int pos = 0; pos <= n; ++pos) {
            vector<int> new_a = a;
            new_a.insert(new_a.begin() + pos, mid);
            if (canCollect(new_a, b)) {
                possible = true;
                break;
            }
        }
        if (possible) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
        }
    return answer;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << '\n';
    }
    return 0;
}

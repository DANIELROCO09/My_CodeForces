#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n, q;
    cin >> n >> q;

    vector<vector<int>> prefix1(n + 1, vector<int>(26, 0));
    vector<vector<int>> prefix2(n + 1, vector<int>(26, 0));

    for (int i = 1; i <= n; i++){
        char c;
        cin >> c;
        prefix1[i][c - 'a']++;

        for (int j = 0; j < 26; j++)
            prefix1[i][j] += prefix1[i - 1][j];
    }
    for (int i = 1; i <= n; i++){
        char c;
        cin >> c;
        prefix2[i][c - 'a']++;

        for (int j = 0; j < 26; j++)
            prefix2[i][j] += prefix2[i - 1][j];
    }
    while (q--){
        int l, r;
        cin >> l >> r;

        int dif = 0;

        for (int c = 0; c < 26; c++){
            int v1 = prefix1[r][c] - prefix1[l - 1][c];
            int v2 = prefix2[r][c] - prefix2[l - 1][c];

            dif += abs(v1 - v2);
        }
        cout << dif / 2 << "\n";
    }
}

int main(){
    int t;
    cin >> t;

    while (t--)
        solve();
}

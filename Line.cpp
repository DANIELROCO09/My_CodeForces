#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    ll t; std::cin >> t;
    while(t--){
        ll n; std::cin >> n;
        string s; std::cin >> s;
        vector<ll> diffs(n, 0);
        ll sum(0);
        for(ll p = 0; p < n; p++){
            ll cur = (s[p] == 'L') ? p : n - p - 1;
            ll mx = (p > (n - p - 1)) ? p : (n - p - 1);
            sum += cur;
            ll diff = mx - cur;
            diffs[p] = diff;
        }
        sort(diffs.rbegin(), diffs.rend());

        for(ll p = 0; p < n; p++){
            sum += diffs[p];
            cout << sum << " ";
        }
        cout << std::endl;
    }
    return 0;
}

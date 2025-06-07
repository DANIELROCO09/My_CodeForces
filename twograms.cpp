#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    map<string, int> freq;
    for (int i = 0; i < n - 1; ++i) {
        string two_gram = s.substr(i, 2);
        freq[two_gram]++;
    }
    string max_two_gram;
    int max_count = 0;
    for (const auto& pair : freq) {
        if (pair.second > max_count) {
            max_count = pair.second;
            max_two_gram = pair.first;
        }
    }
    cout << max_two_gram << endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool canPartitionWithMex(int x, int k, const vector<int>& a) {
    if (x == 0) {
        return true;
    }
    unordered_map<int, int> count;
    int required = x;
    int current = 0;
    int subarrays = 0;
    
    for (int num : a) {
        if (num < x && count[num] == 0) {
            current++;
        }
        count[num]++;
        
        if (current == required) {
            subarrays++;
            if (subarrays >= k) {
                return true;
            }
            count.clear();
            current = 0;
        }
    }
    
    return subarrays >= k;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int left = 0, right = n + 1, answer = 0;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (canPartitionWithMex(mid, k, a)) {
                answer = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        cout << answer << endl;
    }
    
    return 0;
}
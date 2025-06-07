#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int q;
        cin >> q;

        deque<int> dq;
        long long total = 0;
        long long sum = 0;
        bool reversed = false;

        for (int i = 0; i < q; ++i) {
            int s;
            cin >> s;

            if (s == 1) {
                // Cyclic shift
                if (reversed) {
                    int front = dq.front();
                    dq.pop_front();
                    total = total - front * 1 + sum - front;
                    sum = sum; // sum remains the same
                    dq.push_back(front);
                } else {
                    int back = dq.back();
                    dq.pop_back();
                    total = total - back * dq.size() + back * 1 + sum - back;
                    sum = sum; // sum remains the same
                    dq.push_front(back);
                }
            } else if (s == 2) {
                // Reverse the array
                reversed = !reversed;
                // Reversing changes the indices, so total becomes sum * (m + 1) - total - sum
                // Because new index i becomes m - i + 1
                long long m = dq.size();
                total = sum * (m + 1) - total;
            } else if (s == 3) {
                // Append an element
                int k;
                cin >> k;
                sum += k;
                long long m = dq.size();
                if (reversed) {
                    total += k * 1;
                    dq.push_front(k);
                } else {
                    total += k * (m + 1);
                    dq.push_back(k);
                }
            }

            cout << total << '\n';
        }
    }

    return 0;
}
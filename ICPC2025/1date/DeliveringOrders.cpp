#include <iostream>
#include <vector>
using namespace std;

int main() {
    int K;
    cin >> K;
    vector<long long> inventory(K);
    for (int i = 0; i < K;i++) {
        cin >> inventory[i];
    }

    int N;
    cin >> N;
    vector<vector<int>> orders(N, vector<int>(K));
    for (int i = 0; i < N;i++) {
        for (int j = 0; j < K;j++) {
            cin >> orders[i][j];
        }
    }

    int day = 1;
    while (true) {
        bool canFulfill = true;
        for (int i = 0; i < N;i++) {
            bool orderFulfilled = true;
            for (int j = 0; j < K;j++) {
                if (orders[i][j] > inventory[j]) {
                    orderFulfilled = false;
                    break;
                }
            }
            if (orderFulfilled) {
                for (int j = 0; j < K;j++) {
                    inventory[j] -= orders[i][j];
                }
            } else {
                cout << day << " " << (i + 1) << endl;
                return 0;
            }
        }
        day++;
    }

    return 0;
}
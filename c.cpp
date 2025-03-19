#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; // Leer el número de habitaciones y el número de branch rooms

    set<int> branchRooms;  // Usar un conjunto para acceder rápidamente a las branch rooms
    for (int i = 0; i < k; i++) {
        int room;
        cin >> room;
        branchRooms.insert(room);
    }

    int visits = 0;  // Contador de visitas
    int currentRoom = 1;

    while (currentRoom <= n) {
        visits++;
        if (branchRooms.count(currentRoom) && visits % 2 == 1) {
            currentRoom = 1;  // Regresar a la primera habitación en visitas impares
        } else {
            currentRoom++;
        }
    }

    cout << visits << endl;

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

// Función que calcula el costo de una subsecuencia de dígitos
double calculateCost(const string &subseq) {
    int sum = 0;
    
    // Se calcula la suma de los dígitos en la subsecuencia
    for (char c : subseq) {
        sum += c - '0';  // Convertir el carácter en su valor numérico
    }
    // Si la suma es cero, se retorna un valor muy grande para evitar división por cero
    if (sum == 0) return INT_MAX;
    // Convertir la subsecuencia en un número decimal y calcular el costo
    double num = stod(subseq);
    return num / sum;  // El costo es el número dividido por la suma de sus dígitos
}

int main() {
    int t;
    cin >> t;  // Leer la cantidad de casos de prueba
    while (t--) {  // Bucle para cada caso de prueba
        string n;
        cin >> n;  // Leer el número como string
        int len = n.length();  // Obtener la longitud del número
        double minCost = INT_MAX;  // Inicializar el costo mínimo con un valor grande
        int maxLen = 0;  // Inicializar la longitud de la subsecuencia con el máximo valor encontrado

        // Verificar subsecuencias de 1 a 3 dígitos (para números de hasta 6 dígitos)
        for (int l = 1; l <= min(len, 3); ++l) {  // Para subsecuencias de longitud 1 a 3
            for (int i = 0; i <= len - l; ++i) {  // Para cada subsecuencia de longitud l
                string subseq = n.substr(i, l);  // Obtener la subsecuencia de longitud l
                
                // Si la subsecuencia representa el número cero, la saltamos
                if (stod(subseq) == 0) continue;
                
                // Calcular el costo de la subsecuencia
                double cost = calculateCost(subseq);
                
                // Si el costo es menor que el costo mínimo encontrado, actualizamos
                if (cost < minCost) {
                    minCost = cost;
                    maxLen = l;  // Actualizamos la longitud de la subsecuencia
                } 
                // Si el costo es igual, preferimos la subsecuencia más larga
                else if (cost == minCost) {
                    if (l > maxLen) {
                        maxLen = l;  // Si la subsecuencia actual es más larga, actualizamos
                    }
                }
            }
        }
        // Imprimir la diferencia entre la longitud total del número y la longitud de la subsecuencia con el costo mínimo
        cout << len - maxLen << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

//prottipo de funcion
bool hasDistinctDigits(int year);

int main(){
    int y;
    cin>>y;
    while(true){
        y++;
        if(hasDistinctDigits(y)){
            break;
        }
    }
    cout<<y;
    return 0;
}

// Función que verifica si todas las cifras de un año son distintas
bool hasDistinctDigits(int year) {
    string yearStr = to_string(year);
    set<char> digits;
    
    // Insertamos los dígitos en un set, que automáticamente elimina duplicados
    for (char digit : yearStr) {
        digits.insert(digit);
    }

    // Si el tamaño del set es igual al tamaño de la cadena, no hay dígitos repetidos
    return digits.size() == yearStr.size();
}

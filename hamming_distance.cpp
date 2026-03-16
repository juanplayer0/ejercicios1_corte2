#include <iostream>
using namespace std;

int main() {

    string dna1;
    string dna2;
    int distancia = 0;

    cout << "Ingrese la primera cadena de ADN: ";
    cin >> dna1;

    cout << "Ingrese la segunda cadena de ADN: ";
    cin >> dna2;

    if (dna1.length() != dna2.length()) {
        cout << "Error: las cadenas deben tener la misma longitud" << endl;
        return 0;
    }

    for (int i = 0; i < dna1.length(); i++) {

        if (dna1[i] != dna2[i]) {
            distancia++;
        }

    }

    cout << "La distancia de Hamming es: " << distancia << endl;

    return 0;
}
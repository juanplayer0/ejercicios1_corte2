#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int numero, original, digitos = 0;
    int suma = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    original = numero;

    // contar digitos
    int temp = numero;
    while (temp != 0) {
        temp /= 10;
        digitos++;
    }

    // calcular suma de potencias
    temp = numero;
    while (temp != 0) {

        int digito = temp % 10;

        suma += pow(digito, digitos);

        temp /= 10;
    }

    // verificar
    if (suma == original)
        cout << "Es un numero Armstrong";
    else
        cout << "No es un numero Armstrong";

    return 0;
}
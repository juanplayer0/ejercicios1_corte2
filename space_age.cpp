#include <iostream>
using namespace std;

int main() {

    double segundos;
    double edadTierra;

    cout << "Ingrese su edad en segundos: ";
    cin >> segundos;

    edadTierra = segundos / 31557600;

    cout << "Edad en la Tierra: " << edadTierra << endl;
    cout << "Edad en Mercury: " << edadTierra / 0.2408467 << endl;
    cout << "Edad en Venus: " << edadTierra / 0.61519726 << endl;
    cout << "Edad en Mars: " << edadTierra / 1.8808158 << endl;
    cout << "Edad en Jupiter: " << edadTierra / 11.862615 << endl;
    cout << "Edad en Saturn: " << edadTierra / 29.447498 << endl;
    cout << "Edad en Uranus: " << edadTierra / 84.016846 << endl;
    cout << "Edad en Neptune: " << edadTierra / 164.79132 << endl;

    return 0;
}
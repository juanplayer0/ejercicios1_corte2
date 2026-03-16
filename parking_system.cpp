#include <iostream>
using namespace std;

class ParkingSystem {
public:
    int espaciosGrandes;
    int espaciosMedianoss;
    int espaciosPequenos;

    ParkingSystem(int big, int medium, int small) {
        espaciosGrandes = big;
        espaciosMedianoss = medium;
        espaciosPequenos = small;
    }

    bool addCar(int carType) {
        if (carType == 1) {
            if (espaciosGrandes > 0) {
                espaciosGrandes = espaciosGrandes - 1;
                return true;
            } else {
                return false;
            }
        }
        if (carType == 2) {
            if (espaciosMedianoss > 0) {
                espaciosMedianoss = espaciosMedianoss - 1;
                return true;
            } else {
                return false;
            }
        }
        if (carType == 3) {
            if (espaciosPequenos > 0) {
                espaciosPequenos = espaciosPequenos - 1;
                return true;
            } else {
                return false;
            }
        }
        return false;
    }
};

int main() {
    cout << boolalpha;

    int big, medium, small;
    cout << "Cuantos espacios grandes: ";
    cin >> big;
    cout << "Cuantos espacios medianos: ";
    cin >> medium;
    cout << "Cuantos espacios pequenos: ";
    cin >> small;

    ParkingSystem* parkingSystem = new ParkingSystem(big, medium, small);

    int opcion;
    while (true) {
        cout << "\nQue tipo de carro quiere parquear? (1=grande, 2=mediano, 3=pequeno, 0=salir): ";
        cin >> opcion;

        if (opcion == 0) {
            cout << "Saliendo..." << endl;
            break;
        }

        if (opcion < 1 || opcion > 3) {
            cout << "Opcion invalida" << endl;
            continue;
        }

        bool resultado = parkingSystem->addCar(opcion);
        if (resultado == true) {
            cout << "Carro parqueado exitosamente!" << endl;
        } else {
            cout << "No hay espacio disponible!" << endl;
        }
    }

    return 0;
}
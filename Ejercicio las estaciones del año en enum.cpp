#include <iostream>
using namespace std;

enum Estacion { Primavera = 1, Verano, Otono, Invierno };

int main() {
    int numero;

    
    cout << "Ingresa un numero del 1 al 4 para seleccionar una estacion del año: ";
    cin >> numero;

    
    switch(static_cast<Estacion>(numero)) {
        case Primavera:
            cout << "Primavera" << endl;
            break;
        case Verano:
            cout << "Verano" << endl;
            break;
        case Otono:
            cout << "Otono" << endl;
            break;
        case Invierno:
            cout << "Invierno" << endl;
            break;
        default:
            cout << "Número inválido. Debes ingresar un número entre 1 y 4." << endl;
            break;
    }

    return 0;
}


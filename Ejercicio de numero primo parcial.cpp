#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    
    if (numero < 2) {
        return false;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numero;
    
    cout << "Introduce un numero entero positivo: ";
    cin >> numero;

    
    if (numero < 0) {
        cout << "El numero debe ser positivo." << endl;
    } else {
        
        if (esPrimo(numero)) {
            cout << "El numero " << numero << " es primo." << endl;
        } else {
            cout << "El numero " << numero << " no es primo." << endl;
        }
    }

    return 0;
}


#include <iostream>
using namespace std;

int calcularPotencia(int base, int exponente) {
    int resultado = 1;
    
    
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    
    return resultado;
}

int main() {
    int base, exponente;

    cout << "Introduce la base (entero): ";
    cin >> base;
    cout << "Introduce el exponente (entero positivo): ";
    cin >> exponente;


    if (exponente < 0) {
        cout << "El exponente debe ser un numero entero positivo." << endl;
    } else {
        
        int potencia = calcularPotencia(base, exponente);
        cout << "El resultado de " << base << "^" << exponente << " es: " << potencia << endl;
    }

    return 0;
}


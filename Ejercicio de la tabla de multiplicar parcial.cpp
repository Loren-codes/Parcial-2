#include <iostream>
using namespace std;

int main() {
    int numero, limite;

    // Solicitar al usuario que ingrese el número para la tabla de multiplicar
    cout << "Ingresa el numero para generar la tabla de multiplicar: ";
    cin >> numero;

    // Solicitar hasta qué número se desea mostrar la tabla
    cout << "Ingresa el limite hasta donde quieres la tabla de multiplicar: ";
    cin >> limite;

    // Generar la tabla de multiplicar
    cout << "\nTabla de multiplicar del " << numero << ":\n";
    for (int i = 1; i <= limite; ++i) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}


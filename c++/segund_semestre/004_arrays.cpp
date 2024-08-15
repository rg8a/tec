
#include <iostream>
using namespace std;

int main() {
    const int tamano = 5;
    int miArray[5];  // Declara un array de 5 elementos

    // Inicializa el array con algún valor (puedes omitir esto si no necesitas valores iniciales)
    for (int i = 0; i < tamano; ++i) {
        miArray[i] = 0;  // Puedes asignar cualquier valor que desees
    }

    // Agrega elementos al array utilizando un bucle
    for (int i = 0; i < tamano; ++i) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> miArray[i];
    }

    // Muestra los elementos del array
    cout << "Elementos del array: ";
    for (int i = 0; i < tamano; ++i) {
        cout << miArray[i] << " ";
    }

    return 0;
}

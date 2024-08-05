
#include <iostream>
using namespace std;


int main() {
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Itera a través de las filas
    for (int i = 0; i < 2; ++i) {
        // Itera a través de las columnas
        for (int j = 0; j < 3; ++j) {
            // Muestra cada elemento de la matriz
            cout << matriz[i][j] << " ";
        }
        // Salto de línea después de cada fila
        cout << endl;
    }

    return 0;
}
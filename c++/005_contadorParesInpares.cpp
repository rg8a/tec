// Ricardo Gaspar Ochoa - A00838841
// Este programa calcula impares y pares desde valores ingresados
#include <iostream>
using namespace std;

int main() {
    int pares = 0;
    int impares = 0;
    int contador = 0;
    int arreglo[10];
    int dato;

    // Entradas
    cin >> dato;
    while(dato != -1){
        arreglo[contador] = dato;
        contador += 1;
        cin >> dato;
    }

    //proceso
    for (int ciclo = 0; ciclo < contador; ciclo++){
        if (arreglo[ciclo] % 2 == 0){
            pares += 1;
        } else {
            impares += 1;
        }
    }

    // Salidas
    cout << "PARES=" << pares << endl;
    cout << "IMPARES=" << impares << endl;

    return 0;
}

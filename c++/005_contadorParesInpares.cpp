// Ricardo Gaspar Ochoa - A00838841
// Este programa calcula impares y pares desde valores ingresados
#include <iostream>
using namespace std;

void muestraResultado(int pares, int impares){
    cout << "PARES=" << pares << endl;
    cout << "IMPARES=" << impares << endl;
}

void calcularParesImpares(int &pares, int &impares, int contador, int arreglo[]){
    for (int ciclo = 0; ciclo < contador; ciclo++){
        if (arreglo[ciclo] % 2 == 0){
            pares += 1;
        } else {
            impares += 1;
        }
    }
}

void capturaDatos(int arreglo[],int &contador,int &dato){
    cin >> dato;
        while(dato != -1){
        arreglo[contador] = dato;
        contador += 1;
        cin >> dato;
    }
}

int main() {
    int pares = 0;
    int impares = 0;
    int contador = 0;
    int arreglo[10];
    int dato;

    // Entradas
    capturaDatos(arreglo, contador, dato);

    //proceso
    calcularParesImpares(pares, impares, contador, arreglo);

    // Salidas
    muestraResultado(pares, impares);

    return 0;
}

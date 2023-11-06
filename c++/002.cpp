// Ricardo Gaspar Ochoa - A00838841
// Este programa es Tarea datos estructurados
#include <stdio.h>
#include <iostream>
using namespace std;

int edades() {
    int arreglo_edades[10]; 

    // Asignar valores al arreglo
    for (int i = 0; i < 10; i++) {
        arreglo_edades[i] = i + 1; 
    }

    // Mostrar los valores
    for (int i = 0; i < 10; i++) {
        cout << "edad: " << arreglo_edades[i] << std::endl;
    }
}

int suma_edades() {
    int arreglo_edades[10];
    int edad = 0;
    int suma_edades = 0;

    // Asignar valores al arreglo
    for (int i = 0; i < 10; i++) {
        cout << "\n";
        cout << "Dame tu edad:";
        std::cin >> edad;
        arreglo_edades[i] = edad; 
        suma_edades += edad;
    }

    // Mostrar los valores
        cout << "Suma de edades: " << suma_edades << std::endl;
}

int main() {
    // Declarar variables

    // Entradas

    // Procesos

    // Salidas
    cout << "Edades:";
    edades();
    cout << "\n";

    cout << "Suma de edades:";
    suma_edades();
    cout << "\n";



    return 0;
}
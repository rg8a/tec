// Ricardo Gaspar Ochoa - A00838841
// Este programa es Tarea datos estructurados
#include <stdio.h>
#include <iostream>
#include <cstdlib> // Librería numeros random
using namespace std;

int edades() {
    //Declarar Areglo
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
    //Declarar Variables
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

int promedio_random(){
    int numeros_random[50];
    int promedio = 0;

    for (int i = 0; i < 50; ++i) {
        numeros_random[i] = std::rand() % 201;
        promedio = promedio += numeros_random[i];
    }

    // Mostrar los valores
    cout << "El promedio de los valores aleatorios es: " << promedio / 50;
}

int valor_mayor(){
    int numeros_random[25];
    int numero_mayor = 0;
    int index_numero = 0;

    for (int i = 0; i < 25; ++i) {
        numeros_random[i] = std::rand() % 501;
         
        if(numero_mayor <= numeros_random[i]){
            numero_mayor = numeros_random[i];
            index_numero = i;
        }
    }

    // Mostrar los valores
    cout << "El valor más grande el arreglo es : " << numero_mayor << "y está en la posición:" << index_numero << "\n";
    
    for (int i = 0; i < 25; i++) {
        cout << i <<":" << numeros_random[i] << std::endl;
    }
}


int main() {
    // Declarar variables

    // Entradas

    // Procesos

    // Salidas
    // cout << "Edades:";
    // edades();
    // cout << "\n";

    // cout << "Suma de edades:";
    // suma_edades();
    // cout << "\n";

    // cout << "Promedio de random:";
    // promedio_random();
    // cout << "\n";

    cout << "Valor mayor:";
    valor_mayor();
    cout << "\n";

    return 0;
}
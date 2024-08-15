// Ricardo Gaspar Ochoa - A00838841
// Este programaha recibe número entero y le aplique una expresión aritmética
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    // Declarar variables
    int numero;
    int calculo;

    // Entradas
    std::cin >> numero;

    // Procesos
    calculo = numero % 7 - 5 + pow(2,3);

    // Salidas
    cout << calculo;

    return 0;
}
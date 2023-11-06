// Ricardo Gaspar Ochoa - A00838841
// Este programaha hace...
#include <stdio.h>
#include <iostream>
using namespace std;


int main()
{
    // Declarar variables
    int base, altura;
    int calculo;

    // Entradas
    cout << "Dame la base:";
    std::cin >> base;
    cout << "Dame la altura:";
    std::cin >> altura;

    // Procesos
    calculo = base * altura;
    // Salidas
    cout << calculo;

    return 0;
}
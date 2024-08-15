// Ricardo Gaspar Ochoa - A00838841
// Este programa suma dos nímeros
#include <iostream>
using namespace std;

float suma(float &valor_uno, float &valor_dos, float &resultado){
    std::cin >> valor_uno;
    std::cin >> valor_dos;
    resultado = valor_uno + valor_dos;
    return resultado;
}

int main() {
    // Declarar variables
    float valor_uno;
    float valor_dos;
    float resultado;
    
    // Entradas

    // Procesos
    suma(valor_uno, valor_dos, resultado);

    // Salidas
    cout << resultado;

    return 0;
}
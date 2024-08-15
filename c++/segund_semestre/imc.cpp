// Ricardo Gaspar Ochoa - A00838841
// Este programa calcula el índice de masa coorporal
#include <iostream>
#include "imc.h"

using namespace std;

int main() {
    // Declarar variables
    Imc miImc;
    float resultado;
    
    // Entradas
    miImc.capturaDatos();
    
    // Procesos
    resultado = miImc.calculaImc();

    // Salidas
    miImc.muestraResultado();

    return 0;
}
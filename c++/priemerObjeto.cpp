// Ricardo Gaspar Ochoa - A00838841
// Este programa trabajo con el objeto rectangulo
#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main() {
    // Declarar variables
    Rectangulo ejemplo;
    float resultado;
    
    // Entradas
    ejemplo.setLargo(10);
    ejemplo.setAncho(5);
    // Procesos
    resultado = ejemplo.calculaArea();

    // Salidas
    ejemplo.muestraArea();

    return 0;
}
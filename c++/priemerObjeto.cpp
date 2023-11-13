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
    // ejemplo.setLargo();
    // ejemplo.setAncho();
    ejemplo.capturaDatos();
    
    // Procesos
    resultado = ejemplo.calculaArea();

    // Salidas
    ejemplo.muestraArea();

    return 0;
}
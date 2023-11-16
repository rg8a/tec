// Ricardo Gaspar Ochoa - A00838841
// Este programa calcula área de triangulo
#include <iostream>
#include "Triangulo.h"

using namespace std;

int main() {
    // Declarar variables
    Triangulo miTriangulo;
    float resultado;
    
    // Entradas
    miTriangulo.capturaDatos();
    
    // Procesos
    resultado = miTriangulo.calculaArea();

    // Salidas
    miTriangulo.muestraArea();

    return 0;
}
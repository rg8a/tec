// Ricardo Gaspar Ochoa - A00838841
// Este programa recibe datos de series y muestra el listado ingresado
#include <iostream>
#include "Serie.h"
using namespace std;

// int main() {
//     // Declarar variables
//     Imc miImc;
//     float resultado;
    
//     // Entradas
//     miImc.capturaDatos();
    
//     // Procesos
//     resultado = miImc.calculaImc();

//     // Salidas
//     miImc.muestraResultado();

//     return 0;
// }

int main() {
    Serie miSerie;

    // int temporadas, capitulos, anioAparicion;

    miSerie.capturaDatos();
    // miSerie.setGenero(genero);

    miSerie.mostrarDatos();

    return 0;
}
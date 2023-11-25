// Ricardo Gaspar Ochoa - A00838841
// Este programa recibe datos de series y muestra el listado ingresado

#include <iostream>
#include "Serie.h"
using namespace std;

int main() {
    //Variables
    Serie miSerie;
    
    //Entradas
    miSerie.capturaDatos();

    // Salida
    miSerie.mostrarDatos();

    return 0;
}
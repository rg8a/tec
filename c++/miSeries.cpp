// Ricardo Gaspar Ochoa - A00838841
// Este programa recibe datos de series y muestra el listado ingresado

#include <iostream>
#include "Serie.h"
using namespace std;

int main() {
    //Variables
    // Serie miSerie;
    vector<Serie> series; 

    //Entradas
    // miSerie.capturaDatos();

    // nuevaSerie.capturaDeTituloLista();

    while (true) {
        Serie nuevaSerie;

        nuevaSerie.capturaDatos();

        // Verificar si el nombre de la serie es vacío, si lo es, detener la entrada
        if (nuevaSerie.getNombreDeSerieDesdeSeriesOPelicula()[0] == '\0') {
            break;
        }

        series.push_back(nuevaSerie);  // Agregar la serie al vector
    }
    
    series[0].mostrarSerieResume();
    for ( Serie& serie : series) {
        serie.mostrarDatos();
    }

    // Nota  cuando 'miSerie.getNombreDeSerieDesdeSeriesOPelicula()'
    // sea == '\0', se para de agregar datos

    // Salida
    // cout << miSerie.getNombreDeSerieDesdeSeriesOPelicula();


    return 0;
}
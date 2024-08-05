#include <iostream>
#include <string>
#include "Serie.h"
using namespace std;

const int MAX_SERIES = 100;

class Lista {
    private:
    std::string nombre;
    Serie series[MAX_SERIES];
    int capitulosTotales;
    int cantidadSeries;

    public:
        Lista(string nombre) : nombre(nombre), capitulosTotales(0), cantidadSeries(0) {}

        void agregarSerie(Serie serie) {
            series[cantidadSeries++] = serie;
            capitulosTotales += serie.obtenerCapitulos();
        }

        void obtenerInfo() const {
            std::cout << "Lista: Series de " << nombre << std::endl;
            std::cout << "Cantidad de series: " << cantidadSeries << std::endl;
            std::cout << "Capítulos totales: " << capitulosTotales << std::endl;
        }

};

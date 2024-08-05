#include <iostream>
#include <string>
#include "Lista.h"
using namespace std;


int main() {
    std::string nombreLista;
    std::cout << "Ingrese el nombre de la lista de series: ";
    std::getline(std::cin, nombreLista);

    Lista listaSeries(nombreLista);

    char continuar;
    do {
        std::string nombreSerie;
        int capitulos;

        std::cout << "Ingrese el nombre de la serie: ";
        std::getline(std::cin, nombreSerie);

        std::cout << "Ingrese la cantidad de capítulos de la serie: ";
        std::cin >> capitulos;
        std::cin.ignore();  // Limpiar el buffer de entrada después de leer un entero

        Serie nuevaSerie(nombreSerie, capitulos);
        listaSeries.agregarSerie(nuevaSerie);

        std::cout << "¿Desea agregar otra serie? (S/N): ";
        std::cin >> continuar;
        std::cin.ignore();  // Limpiar el buffer de entrada después de leer un carácter

    } while (continuar == 'S' || continuar == 's');

    listaSeries.obtenerInfo();

    return 0;
}
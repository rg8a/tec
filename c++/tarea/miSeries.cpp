// Ricardo Gaspar Ochoa - A00838841
// Este programa recibe datos de series y muestra el listado ingresado

#include <iostream>
#include "Lista.h"
using namespace std;

int main() {
    // Variables
    vector<Lista> misListas;
    int totalCapitulos = 0;
    int totalSeries = 0;

    while (true) {
        // Capturar datos para una lista
        Lista nuevaLista;
        nuevaLista.capturaNombreDeLista();
        nuevaLista.capturaDatos();

        // Verificar si el nombre de la serie está vacío
        if (nuevaLista.getNombreDeLista().empty()) {
            // Imprimo valores
            for (auto& lista : misListas) {
                totalCapitulos += lista.getTotalCapitulos();
                totalSeries += lista.getTotalSeries();

                lista.mostrarSerieResume();
                cout << "\n";
                cout << "Cantidad de series:" << totalSeries << "\n";
                cout << "Capítulos totales:" << totalCapitulos << "\n";
           
                cout << "- Lista consulta -" << "\n";
                cout << "Series:" << "\n";
                lista.mostrarDatos();
            }
             // Salgo del bucle
            break;
        }

        // Agregar la lista al vector
        misListas.push_back(nuevaLista);
    }

    return 0;
}



// Ricardo Gaspar Ochoa - A00838841
// Este programa recibe datos de series y muestra el listado ingresado

#include <iostream>
#include "Lista.h"
using namespace std;

const int tamanioLista = 10;

int main() {
    // Variables
    Lista misListas[tamanioLista];
    int totalCapitulos = 0;
    int totalSeries = 0;
    int numListas = 0;

    while (numListas < tamanioLista) {
        // Capturar datos para una lista
        Lista nuevaLista;
        nuevaLista.capturaNombreDeLista();
        nuevaLista.capturaDatos();

        // Verificar si el nombre de la serie está vacío
        if (nuevaLista.getNombreSerie().empty()) {
            // Imprimo valores
            for (int index = 0; index < numListas; ++index) {
                totalCapitulos += misListas[index].getTotalCapitulos();
                totalSeries += misListas[index].getTotalSeries();

                if (index == 0){
                misListas[index].mostrarSerieResume();
                cout << "Cantidad de series:" << totalSeries << "\n";
                cout << "Capítulos totales:" << totalCapitulos << "\n";
                cout << "- Lista consulta -" << "\n";
                cout << "Series:" << "\n";
                }

                cout << index << ".";
                misListas[index].mostrarDatos();
            }
             // Salgo del bucle
            break;
        }


        // Agregar la lista al array
        misListas[numListas] = nuevaLista;
        numListas++;
    }

    return 0;
}



// Ricardo Gaspar Ochoa - A00838841
// Este programa recibe datos de series y muestra el listado ingresado

#include <iostream>
#include "SeriesOPelicula.h"
using namespace std;

class Serie {
    private:
        char nombreDeLista[50];
        SeriesOPelicula seriePelicula;
        // char NombreDeSerieDesdeSeriesOPelicula[50];

    public:
        Serie();
        void setNombreDeLista(char*);
        char* getNombreDeLista();
        // void setNombreDeSerieDesdeSeriesOPelicula(char*);
        char* getNombreDeSerieDesdeSeriesOPelicula(); 
        void capturaDatos();
        void mostrarDatos();
        void mostrarSerieResume();
        void mostrarInfoDeSeriePelicula();
};

Serie :: Serie() {
    // Inicializo
    nombreDeLista[0] = '\0';
}

void Serie :: setNombreDeLista(char* name) {
    strcpy(nombreDeLista, name);
}

char* Serie :: getNombreDeLista(){
    return nombreDeLista;
}

void Serie :: capturaDatos() {
    cin.getline(nombreDeLista,50,'\n');
    seriePelicula.capturaDatos();
}

void Serie::mostrarInfoDeSeriePelicula() {
    seriePelicula.mostrarInfo();
}

// void Serie :: setNombreDeSerieDesdeSeriesOPelicula(char* name) {
//     strcpy(NombreDeSerieDesdeSeriesOPelicula, name);
// }

char* Serie::getNombreDeSerieDesdeSeriesOPelicula() {
    return seriePelicula.getnombreDeSerie();
}

void Serie :: mostrarSerieResume() {
    cout << "\n";
    cout << "- Lista creada -" << "\n";
    cout << "Lista: " << nombreDeLista;
    cout << "\n";
}
void Serie :: mostrarDatos() {
    cout << "- Lista consulta -" << "\n";
    mostrarInfoDeSeriePelicula();
}
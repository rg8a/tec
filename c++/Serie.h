#include <iostream>
#include <string.h>
#include "SeriesOPeliculas.h"
using namespace std;

class Serie {
    private:
        char nombreDeLista[50];
        SeriesOPelicula seriePelicula;

    public:
        void setNombreDeLista(char*);
        char* getNombreDeLista();
        void capturaDatos();
        void mostrarDatos();
        void mostrarSerieResume();
        void mostrarInfoDeSeriePelicula();
};

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

void Serie :: mostrarSerieResume() {
    cout << "\n";
    cout << "- Lista creada -" << "\n";
    cout << "Lista: " << nombreDeLista;
    cout << "\n";
}
void Serie :: mostrarDatos() {
    mostrarSerieResume();
    mostrarInfoDeSeriePelicula();

}
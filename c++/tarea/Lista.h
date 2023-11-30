// Ricardo Gaspar Ochoa - A00838841
// Este programa recibe datos de series y muestra el listado ingresado

#include <iostream>
#include "SeriesOPelicula.h"
using namespace std;

class Lista {
private:
    string nombreDeLista;
    string nombreSerie;
    SeriesOPelicula seriePelicula;
    int totalCapitulos = 0;
    int totalSeries = 0;

public:
    Lista();
    void setNombreDeLista(string);
    void capturaNombreDeLista();
    string getNombreDeLista();

    void capturaDatos();
    void mostrarDatos();

    void mostrarSerieResume();

    void mostrarInfoDeSeriePelicula();
    int getTotalCapitulos();
    int getTotalSeries();
    string getNombreSerie();
};

Lista :: Lista() {
    // Inicializo
    nombreDeLista = "";
    nombreSerie = "";
}

void Lista::setNombreDeLista(string name) {
    nombreDeLista = name;
}

string Lista :: getNombreDeLista() {
    return nombreDeLista;
}

string Lista :: getNombreSerie() {
    return seriePelicula.getnombreDeSerie();
}

void Lista :: capturaDatos() {
    seriePelicula.capturaDatos();
    totalSeries++;
}

void Lista :: capturaNombreDeLista() {
    getline(cin, nombreDeLista);
}

void Lista :: mostrarInfoDeSeriePelicula() {
    seriePelicula.mostrarInfo();
}


void Lista::mostrarSerieResume() {
    cout << "\n";
    cout << "- Lista creada -" << "\n";
    cout << "Lista: " << nombreDeLista;
    cout << "\n";
}

void Lista :: mostrarDatos() {
    mostrarInfoDeSeriePelicula();
}

int Lista :: getTotalCapitulos()  {
    return seriePelicula.getCapitulos();
}

int Lista :: getTotalSeries()  {
    return totalSeries;
}

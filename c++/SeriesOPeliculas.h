#include <iostream>
#include <string.h>
using namespace std;

class SeriesOPelicula {
    private:
        char nombreDeSerie[50];
        char genero[50];
        int temporadas;
        int capitulos;

    public:
        void setnombreDeSerie(char*);
        char* getnombreDeSerie();

        void setGenero(char*);
        char* getGenero();

        void setTemporadas(int);
        int getTemporadas();

        void setCapitulos(int);
        int getCapitulos();

        void capturaDatos();
        void mostrarInfo();
};

// Dato de Nombre
void SeriesOPelicula :: setnombreDeSerie(char* name) {
    strcpy(nombreDeSerie, name);
}
char* SeriesOPelicula :: getnombreDeSerie(){
    return nombreDeSerie;
}

// Dato de Generos
void SeriesOPelicula :: setGenero(char* name) {
    strcpy(genero, name);
}
char* SeriesOPelicula :: getGenero(){
    return genero;
}

// Dato de Temporadas
void SeriesOPelicula :: setTemporadas(int number) {
    temporadas = number;
}
int SeriesOPelicula :: getTemporadas(){
    return temporadas;
}

// Dato de Capitulos
void SeriesOPelicula :: setCapitulos(int number) {
    capitulos = number;
}
int SeriesOPelicula :: getCapitulos(){
    return capitulos;
}

// Captura de datos
void SeriesOPelicula :: capturaDatos() {
    cin.getline(nombreDeSerie,50,'\n');
    cin.getline(genero,50,'\n');
    cin >> temporadas;
    cin >> capitulos;
}

void SeriesOPelicula :: mostrarInfo() {
    cout << "Series:" << "\n";
    cout << nombreDeSerie << "\n";
    cout << "Género: " << genero << "\n";
    cout << "Temporadas: " << temporadas << "\n";
    cout << "Capítulos: " << capitulos << "\n";
    cout << "\n";
}
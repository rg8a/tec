// Ricardo Gaspar Ochoa - A00838841
// Este programa recibe datos de series y muestra el listado ingresado

#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
using namespace std;

class SeriesOPelicula {
    private:
        string nombreDeSerie;
        string genero;
        int temporadas;
        int capitulos;
        int ano;
        string clasificacion;
        string actores;

    public:
        SeriesOPelicula();
        void setnombreDeSerie(string);
        string getnombreDeSerie();

        void setGenero(string);
        string getGenero();

        void setTemporadas(int);
        int getTemporadas();

        void setCapitulos(int);
        int getCapitulos();

        void setAno(int);
        int getAno();
        
        void setClasificacion(string);
        string getClasificacion();

        void setActores(string listaActores);
        void getActores();

        void capturaDatos();
        void mostrarInfo();
};

SeriesOPelicula :: SeriesOPelicula() {
    // Inicializo
    nombreDeSerie[0] = '\0';
        capitulos = 0;
        temporadas = 0;
        ano = 0;
        clasificacion.clear();
        genero.clear();
}

// Dato de Nombre
void SeriesOPelicula :: setnombreDeSerie(string name) {
    nombreDeSerie = name;
}
string SeriesOPelicula :: getnombreDeSerie(){
    return nombreDeSerie;
}

// Dato de Generos
void SeriesOPelicula :: setGenero(string name) {
    genero =  name;
}
string SeriesOPelicula :: getGenero(){
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

// Dato de Año
void SeriesOPelicula :: setAno(int number) {
    ano = number;
}
int SeriesOPelicula :: getAno(){
    return ano;
}

// Dato de Clasificación
void SeriesOPelicula :: setClasificacion(string name) {
    clasificacion = name;
}
string SeriesOPelicula :: getClasificacion(){
    return clasificacion;
}

// Datos de Actores
void SeriesOPelicula :: setActores(string listaActores) {
    actores = listaActores;
}

void SeriesOPelicula :: getActores() {
    istringstream listaDeActores(actores);
    // Creo la variable actor de valor string para poder 
    string actor;

    // Proceso actores uno por uno hasta encontrar una coma
    while (getline(listaDeActores, actor, ',')) {
        // Segmento el nombre del actor y que no sea un espacio en blanco
        size_t firstChar = actor.find_first_not_of(' ');
        size_t lastChar = actor.find_last_not_of(' ');
        // Obtengo el valor del nombre del actor que busco
        actor = actor.substr(firstChar, lastChar - firstChar + 1);
        // Imprimo el nommbre del actor con el formato que me piden
        cout << "  - " << actor << endl;
    }
}

// Captura de datos


void SeriesOPelicula :: capturaDatos() {
        getline(cin, nombreDeSerie);
        if (nombreDeSerie.empty()) {
            return;
        }
        getline(cin, genero);
        cin >> temporadas;
        cin >> capitulos;
        cin >> ano;
        getline(cin, clasificacion);
        cin.ignore();// Para consumir el salto de línea pendiente
        getline(cin, actores);
        cin.ignore();
}

void SeriesOPelicula :: mostrarInfo() {
    cout << nombreDeSerie << "\n";
    cout << "  Género: " << genero << "\n";
    cout << "  Temporadas: " << temporadas << "\n";
    cout << "  Capítulos: " << capitulos << "\n";
    cout << "  Año: " << ano << "\n";
    cout << "  Clasificación: " << clasificacion << "\n";
    cout << "  Actores:"<< "\n";
    getActores();
    cout << "\n";
}
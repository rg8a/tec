// Ricardo Gaspar Ochoa - A00838841
// Este programa recibe datos de series y muestra el listado ingresado

#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
using namespace std;

class SeriesOPelicula {
    private:
        char nombreDeSerie[50];
        char genero[50];
        int temporadas;
        int capitulos;
        int ano;
        char clasificacion[20];
        char actores[200];

    public:
        SeriesOPelicula();
        void setnombreDeSerie(char*);
        char* getnombreDeSerie();

        void setGenero(char*);
        char* getGenero();

        void setTemporadas(int);
        int getTemporadas();

        void setCapitulos(int);
        int getCapitulos();

        void setAno(int);
        int getAno();
        
        void setClasificacion(char*);
        char* getClasificacion();

        void setActores(char* listaActores);
        void getActores();

        void capturaDatos();
        void mostrarInfo();
};

SeriesOPelicula :: SeriesOPelicula() {
    // Inicializo
    nombreDeSerie[0] = '\0';
}

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

// Dato de Año
void SeriesOPelicula :: setAno(int number) {
    ano = number;
}
int SeriesOPelicula :: getAno(){
    return ano;
}

// Dato de Clasificación
void SeriesOPelicula :: setClasificacion(char* name) {
    strcpy(clasificacion, name);
}
char* SeriesOPelicula :: getClasificacion(){
    return clasificacion;
}

// Datos de Actores
void SeriesOPelicula :: setActores(char* listaActores) {
    strcpy(actores, listaActores);
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
        cout << "- " << actor << endl;
    }
}

// Captura de datos
void SeriesOPelicula :: capturaDatos() {
    cout << "Series:";
    cin.getline(nombreDeSerie,50,'\n');
    cin.getline(genero,50,'\n');
    cin >> temporadas;
    cin >> capitulos;
    cin >> ano;
    cin.ignore();
    cin.getline(clasificacion,20,'\n');
    cin.getline(actores,200,'\n');
}

void SeriesOPelicula :: mostrarInfo() {
    cout << "Series:" << "\n";
    cout << nombreDeSerie << "\n";
    cout << "Género: " << genero << "\n";
    cout << "Temporadas: " << temporadas << "\n";
    cout << "Capítulos: " << capitulos << "\n";
    cout << "Año: " << ano << "\n";
    cout << "Clasificación: " << clasificacion << "\n";
    cout << "Actores:"<< "\n";
    getActores();
    cout << "\n";
}
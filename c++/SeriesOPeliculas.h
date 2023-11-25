// Ricardo Gaspar Ochoa - A00838841
// Este programa recibe datos de series y muestra el listado ingresado

#include <iostream>
using namespace std;

class SeriesOPelicula {
    private:
        char nombreDeSerie[50];
        char genero[50];
        int temporadas;
        int capitulos;
        int ano;
        char clasificacion[20];

    public:
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

// Captura de datos
void SeriesOPelicula :: capturaDatos() {
    cin.getline(nombreDeSerie,50,'\n');
    cin.getline(genero,50,'\n');
    cin >> temporadas;
    cin >> capitulos;
    cin >> ano;
    cin.ignore();
    cin.getline(clasificacion,20,'\n');;

}

void SeriesOPelicula :: mostrarInfo() {
    cout << "Series:" << "\n";
    cout << nombreDeSerie << "\n";
    cout << "Género: " << genero << "\n";
    cout << "Temporadas: " << temporadas << "\n";
    cout << "Capítulos: " << capitulos << "\n";
    cout << "Año: " << ano << "\n";
    cout << "Clasificación: " << clasificacion << "\n";
    cout << "\n";
}
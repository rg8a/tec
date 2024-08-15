#include <iostream>
#include <string>
#include <vector>

class Serie {
private:
    std::string nombre;
    std::string genero;
    int temporadas;
    int capitulos;
    int anoAparicion;
    std::string clasificacion;
    std::string actoresPrincipales;

public:
    // Constructor que toma los parámetros necesarios para inicializar una Serie
    Serie(std::string _nombre, std::string _genero, int _temporadas, int _capitulos, int _anoAparicion, std::string _clasificacion, std::string _actoresPrincipales)
        : nombre(_nombre), genero(_genero), temporadas(_temporadas), capitulos(_capitulos), anoAparicion(_anoAparicion), clasificacion(_clasificacion), actoresPrincipales(_actoresPrincipales) {}

    // Función para mostrar la información de la Serie
    void mostrarInformacion() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Género: " << genero << std::endl;
        std::cout << "Temporadas: " << temporadas << std::endl;
        std::cout << "Capítulos: " << capitulos << std::endl;
        std::cout << "Año de aparición: " << anoAparicion << std::endl;
        std::cout << "Clasificación: " << clasificacion << std::endl;
        std::cout << "Actores principales: " << actoresPrincipales << std::endl;
        std::cout << "------------------------" << std::endl;
    }
};

int main() {
    std::vector<Serie> listaSeries;  // Vector para almacenar las series

    std::cout << "Ingrese el nombre de la lista: ";
    std::string nombreLista;
    std::getline(std::cin, nombreLista);

    while (true) {
        std::cout << "Ingrese el nombre de la serie (deje vacío para terminar): ";
        std::string nombreSerie;
        std::getline(std::cin, nombreSerie);

        if (nombreSerie.empty()) {
            // Si el nombre de la serie está vacío, terminar la entrada
            break;
        }

        std::cout << "Ingrese el género de la serie: ";
        std::string genero;
        std::getline(std::cin, genero);

        // Pedir otros detalles de la serie
        // ...

        // Crear una instancia de la clase Serie y agregarla al vector
        Serie nuevaSerie(nombreSerie, genero, /*otros argumentos*/);
        listaSeries.push_back(nuevaSerie);
    }

    // Mostrar la información de todas las series en la lista
    std::cout << "\nInformación de la lista '" << nombreLista << "':" << std::endl;
    for (const auto& serie : listaSeries) {
        serie.mostrarInformacion();
    }

    return 0;
}

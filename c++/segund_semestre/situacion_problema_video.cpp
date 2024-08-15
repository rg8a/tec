#include <iostream>
#include <string>
#include <vector>
#include <limits>

class Video {
    protected:
        std::string id;
        std::string nombre;
        double duracion; // en minutos
        std::string genero;
        std::vector<int> calificaciones; // calificaciones del video

    public:
        Video(const std::string& id, const std::string& nombre, double duracion, const std::string& genero)
            : id(id), nombre(nombre), duracion(duracion), genero(genero) {}

        void agregarCalificacion(int calificacion) {
            if (calificacion >= 1 && calificacion <= 5) {
                calificaciones.push_back(calificacion);
            } else {
                std::cerr << "Calificación no válida. Debe estar entre 1 y 5." << std::endl;
            }
        }

        double obtenerCalificacionPromedio() const {
            if (calificaciones.empty()) return 0.0;
            int suma = 0;
            for (int calificacion : calificaciones) {
                suma += calificacion;
            }
            return static_cast<double>(suma) / calificaciones.size();
        }

        virtual void mostrarInfo() const = 0; // Método virtual puro para mostrar información
};

class Pelicula : public Video {
    public:
        Pelicula(const std::string& id, const std::string& nombre, double duracion, const std::string& genero)
            : Video(id, nombre, duracion, genero) {}

        void mostrarInfo() const override {
            std::cout << "Pelicula: " << nombre << "\nID: " << id << "\nDuracion: " << duracion << " minutos"
                    << "\nGenero: " << genero << "\nCalificacion promedio: " << obtenerCalificacionPromedio() << std::endl;
        }
};

class Episodio {
    public:
        std::string titulo;
        int temporada;

        Episodio(const std::string& titulo, int temporada) : titulo(titulo), temporada(temporada) {}
};

class Serie : public Video {
    private:
        std::vector<Episodio> episodios;

    public:
        Serie(const std::string& id, const std::string& nombre, double duracion, const std::string& genero)
            : Video(id, nombre, duracion, genero) {}

        void agregarEpisodio(const std::string& titulo, int temporada) {
            episodios.emplace_back(titulo, temporada);
        }

        void mostrarInfo() const override {
            std::cout << "Serie: " << nombre << "\nID: " << id << "\nDuracion: " << duracion << " minutos"
                    << "\nGenero: " << genero << "\nCalificacion promedio: " << obtenerCalificacionPromedio() << std::endl;
            for (const auto& episodio : episodios) {
                std::cout << "Episodio: " << episodio.titulo << ", Temporada: " << episodio.temporada << std::endl;
            }
        }
};

void cargarSerie(std::vector<Serie>& series) {
    std::string id, nombre, genero;
    double duracion;
    int numEpisodios, temporada;
    std::string tituloEpisodio;

    std::cout << "Ingrese el ID de la serie: ";
    std::cin >> id;
    std::cin.ignore();
    std::cout << "Ingrese el nombre de la serie: ";
    std::getline(std::cin, nombre);
    std::cout << "Ingrese la duración promedio de los episodios (en minutos): ";
    std::cin >> duracion;
    std::cin.ignore();
    std::cout << "Ingrese el género de la serie: ";
    std::getline(std::cin, genero);
    Serie nuevaSerie(id, nombre, duracion, genero);

    std::cout << "Ingrese el número de episodios: ";
    std::cin >> numEpisodios;
    std::cin.ignore();
    for (int i = 0; i < numEpisodios; ++i) {
        std::cout << "Ingrese el título del episodio " << (i + 1) << ": ";
        std::getline(std::cin, tituloEpisodio);
        std::cout << "Ingrese la temporada del episodio " << (i + 1) << ": ";
        std::cin >> temporada;
        std::cin.ignore();
        nuevaSerie.agregarEpisodio(tituloEpisodio, temporada);
    }
    series.push_back(nuevaSerie);
}

void cargarPelicula(std::vector<Pelicula>& peliculas) {
    std::string id, nombre, genero;
    double duracion;

    std::cout << "Ingrese el ID de la película: ";
    std::cin >> id;
    std::cin.ignore();
    std::cout << "Ingrese el nombre de la película: ";
    std::getline(std::cin, nombre);
    std::cout << "Ingrese la duración de la película (en minutos): ";
    std::cin >> duracion;
    std::cin.ignore();
    std::cout << "Ingrese el género de la película: ";
    std::getline(std::cin, genero);
    peliculas.emplace_back(id, nombre, duracion, genero);
}

void verSeriesCargadas(const std::vector<Serie>& series) {
    for (const auto& serie : series) {
        serie.mostrarInfo();
        std::cout << std::endl;
    }
}

void verPeliculasCargadas(const std::vector<Pelicula>& peliculas) {
    for (const auto& pelicula : peliculas) {
        pelicula.mostrarInfo();
        std::cout << std::endl;
    }
}

void calificarSerie(std::vector<Serie>& series) {
    std::string id;
    int calificacion;

    std::cout << "Ingrese el ID de la serie a calificar: ";
    std::cin >> id;
    std::cout << "Ingrese la calificación (1-5): ";
    std::cin >> calificacion;

    for (auto& serie : series) {
        if (serie.id == id) {
            serie.agregarCalificacion(calificacion);
            return;
        }
    }
    std::cerr << "Serie no encontrada." << std::endl;
}

void calificarPelicula(std::vector<Pelicula>& peliculas) {
    std::string id;
    int calificacion;

    std::cout << "Ingrese el ID de la película a calificar: ";
    std::cin >> id;
    std::cout << "Ingrese la calificación (1-5): ";
    std::cin >> calificacion;

    for (auto& pelicula : peliculas) {
        if (pelicula.id == id) {
            pelicula.agregarCalificacion(calificacion);
            return;
        }
    }
    std::cerr << "Película no encontrada." << std::endl;
}

int main() {
    std::vector<Serie> series;
    std::vector<Pelicula> peliculas;
    int opcion;

    do {
        std::cout << "Menú: selecciona el número para:\n"
                  << "1. Cargar serie\n"
                  << "2. Cargar película\n"
                  << "3. Ver series cargadas\n"
                  << "4. Ver películas cargadas\n"
                  << "5. Calificar serie\n"
                  << "6. Calificar película\n"
                  << "0. Salir del programa\n";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                cargarSerie(series);
                break;
            case 2:
                cargarPelicula(peliculas);
                break;
            case 3:
                verSeriesCargadas(series);
                break;
            case 4:
                verPeliculasCargadas(peliculas);
                break;
            case 5:
                calificarSerie(series);
                break;
            case 6:
                calificarPelicula(peliculas);
                break;
            case 0:
                std::cout << "Saliendo del programa..." << std::endl;
                break;
            default:
                std::cerr << "Opción no válida." << std::endl;
                break;
        }
    } while (opcion != 0);

    return 0;
}

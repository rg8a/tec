// Ricardo Gaspar Ochoa - A00838841
// Victor Valero - A01383804

// Este código resuelve la situación problema del curso. 
// - - - - - - - - - - - - - - - - - 
// Se quiere trabajar con dos tipos de videos: películas y series. Todo video tiene un ID, un nombre, una duración y un género (drama, acción, misterio).
// Las series tienen episodios y cada episodio tiene un título y temporada a la que pertenece.
// Nos interesa conocer la calificación promedio que ha recibido cada uno de los videos. Esta califiación está en escala de 1 a 5 donde 5 es la mejor calificación.
// - - - - - - - - - - - - - - - - - 
// El sistema debe ser capaz de :
// - Mostrar los videos en general con sus calificaciones
// - Mostrar los episodios de una determinada serie con sus calificaciones
// - Mostrar las películas con sus calificaciones


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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

        std::string getId() const {
            return id;
        }

        std::string getNombre() const {
            return nombre;
        }

        virtual void mostrarInfo() const = 0; // Método virtual puro para mostrar información
};

class Pelicula : public Video {
    public:
        Pelicula(const std::string& id, const std::string& nombre, double duracion, const std::string& genero)
            : Video(id, nombre, duracion, genero) {}

        void mostrarInfo() const override {
            std::cout << " - - - - - - - - - - - - - - - "  << std::endl;
            std::cout << "Pelicula: " << nombre << "\nID: " << id << "\nDuracion: " << duracion << " minutos"
                    << "\nGenero: " << genero << "\nCalificacion promedio: " << obtenerCalificacionPromedio() << std::endl;
            std::cout << " - - - - - - - - - - - - - - - "  << std::endl;
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
            std::cout << " - - - - - - - - - - - - - - - "  << std::endl;
            std::cout << "Serie: " << nombre << "\nID: " << id << "\nDuracion: " << duracion << " minutos"
                    << "\nGenero: " << genero << "\nCalificacion promedio: " << obtenerCalificacionPromedio() << std::endl;
            for (const auto& episodio : episodios) {
                std::cout << "Episodio: " << episodio.titulo << ", Temporada: " << episodio.temporada << std::endl;
                std::cout << " - - - - - - - - - - - - - - - "  << std::endl;
            }
        }
};

void cargarSerie(std::vector<Serie>& series) {
    std::string id, nombre, genero;
    double duracion;
    int numEpisodios, temporada, calificacion;
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

    std::cout << "Ingrese la calificación de la serie (1-5): ";
    std::cin >> calificacion;
    nuevaSerie.agregarCalificacion(calificacion);

    series.push_back(nuevaSerie);
}

void cargarPelicula(std::vector<Pelicula>& peliculas) {
    std::string id, nombre, genero;
    double duracion;
    int calificacion;

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
    Pelicula nuevaPelicula(id, nombre, duracion, genero);

    std::cout << "Ingrese la calificación de la película (1-5): ";
    std::cin >> calificacion;
    nuevaPelicula.agregarCalificacion(calificacion);

    peliculas.push_back(nuevaPelicula);
}

void verSeriesCargadas(const std::vector<Serie>& series) {
    if (series.empty()) {
        std::cout << "Actualmente no hay series en la base de datos." << std::endl;
    } else {
        for (const auto& serie : series) {
            serie.mostrarInfo();
            std::cout << std::endl;
        }
    }
}

void verPeliculasCargadas(const std::vector<Pelicula>& peliculas) {
    if (peliculas.empty()) {
        std::cout << "Actualmente no hay películas en la base de datos." << std::endl;
    } else {
        for (const auto& pelicula : peliculas) {
            pelicula.mostrarInfo();
            std::cout << std::endl;
        }
    }
}

void verTodoElContenido(const std::vector<Serie>& series, const std::vector<Pelicula>& peliculas) {
    if (series.empty() && peliculas.empty()) {
        std::cout << " "  << std::endl;
        std::cout << " - - - - - - - - - - - - - - - "  << std::endl;
        std::cout << "No hay contenido en la base de datos." << std::endl;
        std::cout << " - - - - - - - - - - - - - - - "  << std::endl;
        std::cout << " "  << std::endl;
    } else {
        if (!series.empty()) {
            std::cout << "Series:" << std::endl;
            for (const auto& serie : series) {
                serie.mostrarInfo();
            }
        }

        if (!peliculas.empty()) {
            std::cout << "Películas:" << std::endl;
            for (const auto& pelicula : peliculas) {
                pelicula.mostrarInfo();
            }
        }
    }
}

void calificarSerie(std::vector<Serie>& series) {
    if (series.empty()) {
        std::cout << " "  << std::endl;
        std::cout << " - - - - - - - - - - - - - - - "  << std::endl;
        std::cout << "No hay series cargadas." << std::endl;
        std::cout << " - - - - - - - - - - - - - - - "  << std::endl;
        std::cout << " "  << std::endl;
        return;
    }

    std::cout << "Escribe el ID de la serie que quieres calificar:" << std::endl;
    for (const auto& serie : series) {
        std::cout << serie.getId() << ". " << serie.getNombre() << std::endl;
    }

    std::string id;
    std::cin >> id;

    bool encontrada = false;
    for (auto& serie : series) {
        if (serie.getId() == id) {
            int calificacion;
            std::cout << "Agrega la calificación a " << serie.getNombre() << " (1-5): ";
            std::cin >> calificacion;
            serie.agregarCalificacion(calificacion);
            std::cout << "Calificación agregada." << std::endl;
            encontrada = true;
            break;
        }
    }

    if (!encontrada) {
        std::cout << "Serie no encontrada." << std::endl;
    }
}

void calificarPelicula(std::vector<Pelicula>& peliculas) {
    if (peliculas.empty()) {
        std::cout << " "  << std::endl;
        std::cout << " - - - - - - - - - - - - - - - "  << std::endl;
        std::cout << "No hay películas cargadas." << std::endl;
        std::cout << " - - - - - - - - - - - - - - - "  << std::endl;
        std::cout << " "  << std::endl;
        return;
    }

    std::cout << "Escribe el ID de la película que quieres calificar:" << std::endl;
    for (const auto& pelicula : peliculas) {
        std::cout << pelicula.getId() << ". " << pelicula.getNombre() << std::endl;
    }

    std::string id;
    std::cin >> id;

    bool encontrada = false;
    for (auto& pelicula : peliculas) {
        if (pelicula.getId() == id) {
            int calificacion;
            std::cout << "Agrega la calificación a " << pelicula.getNombre() << " (1-5): ";
            std::cin >> calificacion;
            pelicula.agregarCalificacion(calificacion);
            std::cout << "Calificación agregada." << std::endl;
            encontrada = true;
            break;
        }
    }

    if (!encontrada) {
        std::cout << "Película no encontrada." << std::endl;
    }
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
                  << "4. Calificar serie cargada\n"
                  << "5. Ver películas cargadas\n"
                  << "6. Calificar película cargada\n"
                  << "7. Ver todo el contenido cargado\n"
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
                calificarSerie(series);
                break;
            case 5:
                verPeliculasCargadas(peliculas);
                break;
            case 6:
                calificarPelicula(peliculas);
                break;
            case 7:
                verTodoElContenido(series, peliculas);
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

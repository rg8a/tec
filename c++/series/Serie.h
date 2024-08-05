#include <iostream>
#include <string>
using namespace std;

const int MAX_SERIES = 100;

class Serie {
public:
    Serie(const std::string& nombre, int capitulos) : nombre(nombre), capitulos(capitulos) {}

    std::string obtenerNombre() const {
        return nombre;
    }

    int obtenerCapitulos() const {
        return capitulos;
    }

private:
    std::string nombre;
    int capitulos;
};

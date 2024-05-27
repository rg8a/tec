#include <iostream>
using namespace std;

// Declarar estructura, Para usar la estructura se debe de usar con una variable tipo estructura.
class Pokemon {
    //Atributos
    public:
        string nombre;
        string tipo;
        float peso;
        string genero;
    //Métodos
    public:
        Pokemon(string, string, float, string);
        void Saludo();
};

Pokemon::Pokemon(string _nombre, string _tipo, float _peso, string _genero){
    nombre = _nombre;
    tipo = _tipo;
    peso = _peso;
    genero = _genero;
}

void Pokemon::Saludo(){
    cout <<"Hola soy " << nombre<< "\n";
}

// Herencia
class Pokemons_Fuego : public Pokemon {
    public:
        int vida;
    public:
    Pokemons_Fuego(string, string, float, string, int);
    void Mostrar_Pokemon();
};

//Constructor
Pokemons_Fuego::Pokemons_Fuego(string _nombre, string _tipo, float _peso, string _genero, int _vida) : Pokemon(_nombre, _tipo, _peso, _genero){
    vida = _vida;
};

void Pokemons_Fuego::Mostrar_Pokemon(){
    Saludo();
    cout << "Vida: " << vida << "\n";
};

int main(){
    Pokemons_Fuego pokemon1("Chikorita", "Hierba", 1.5, "M", 100);
    pokemon1.Mostrar_Pokemon();

    // Pokemon pokemon1 = Pokemon("Chikorita", "Hierba", 1.5, "M");
    // pokemon1.Saludo();

    // Pokemon pokemon2("Pikachu", "Electrico", 1.5, "M");
    // pokemon2.Saludo();
    

    return 0;
}
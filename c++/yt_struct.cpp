#include <iostream>
using namespace std;

// Declarar estructura, Para usar la estructura se debe de usar con una variable tipo estructura.
struct pokemon {
    char nombre[50];
    char tipo[50];
    float peso;
    char genero;
}pokemon1; // Variable tipo estructura.

int main(){

    cout << "Ingrese el nombre del pokémon"<< "\n";
    cin.getline(pokemon1.nombre,50,'\n');
    cout << "Ingrese el tipo del pokémon"<< "\n";
    cin.getline(pokemon1.tipo,50,'\n');
    cout << "Ingrese el peso del pokémon"<< "\n";
    cin >> pokemon1.peso;
    cout << "Ingrese el genero del pokémon"<< "\n";
    cin >> pokemon1.genero;

    cout << "Nombre:"<<pokemon1.nombre<< "\n";
    cout << "Tipo:"<<pokemon1.tipo<< "\n";
    cout << "Peso:"<<pokemon1.peso << "\n";
    cout << "Genero:"<<pokemon1.genero << "\n";

    return 0;
}
// Ricardo Gaspar Ochoa - A00838841

#include <iostream>
using namespace std;

// Declarar clase Persona
class Persona {
    // Atributos
    protected:
        string nombre;
        int edad;
    // Métodos
    public:
        Persona();
        Persona(string, int);
        void muestraPersona();
        void cantar();
};

class Estudiante : public Persona {
    private:
        string carrera;
    public:
        Estudiante();
        Estudiante(string, int, string);
        void muestraEstudiante();
        void carneAsada();
};

class Maestro : public Persona {
    private:
        string depto; // Cambié carrera a depto
    public:
        Maestro();
        Maestro(string, int, string);
        void muestraMaestro();
};

// Definir los métodos de la clase Persona
Persona::Persona() {
    nombre = "Sin nombre";
    edad = 0;
}
// Constructor con parámetros 
Persona::Persona(string _nombre, int _edad) {
    nombre = _nombre;
    edad = _edad;
}
void Persona::muestraPersona() {
    cout << endl << "Datos persona:" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

void Persona::cantar() {
    cout << endl << "Soy " << nombre << " y voy a cantar:" << endl;
    cout << endl <<  "Todo bien al cien, calma en mi para poder ver" << endl;
}

// Métodos clase Estudiante
Estudiante::Estudiante() : Persona() {
    carrera = "Sin carrera";
}
Estudiante::Estudiante(string _nombre, int _edad, string _carrera) : Persona(_nombre, _edad) {
    carrera = _carrera;
}
void Estudiante::muestraEstudiante() {
    muestraPersona(); // Llama al método de la clase base
    cout << "Carrera: " << carrera << endl;
}

void Estudiante::carneAsada(){
    cout << "Este fin de semana haré una carne asada" << endl;
}

// Métodos clase Maestro
Maestro::Maestro() : Persona() {
    depto = "Sin depto";
}
Maestro::Maestro(string _nombre, int _edad, string _depto) : Persona(_nombre, _edad) {
    depto = _depto;
}
void Maestro::muestraMaestro() {
    muestraPersona(); // Llama al método de la clase base
    cout << "Depto: " << depto << endl;
}

int main() {
    Persona per1("Bryan", 25), per2("Sergio", 18), per3;
    Estudiante est1("Kevin", 20, "ITC"), est2("Mario", 21, "ITD"), est3("Alexia", 19, "IID");
    Maestro mae1("Juan", 35, "Matemáticas"), mae2;

    // Muestra Persona
    per1.muestraPersona();
    per2.muestraPersona();
    per3.muestraPersona();

    est1.muestraEstudiante();
    est2.muestraEstudiante();
    est3.muestraEstudiante();

    mae1.muestraMaestro();
    mae2.muestraMaestro();

    mae1.cantar();
    est1.carneAsada();

    return 0;
}

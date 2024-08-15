#include <iostream>
using namespace std;

// Declarar clase Persona
class Persona {
    // Atributos, protected porque hereda
    protected:
        string nombre;
        int edad;
    // Métodos
    public:
        Persona();
        Persona(string, int);
        void muestraDatos();
};

class Estudiante : public Persona {
    private:
        int matricula;
        string carrera;
    public:
        Estudiante();
        Estudiante(string, int, int, string);
        void muestraDatos();
};

class Maestro : public Persona {
    private:
        int nomina;
        string depto;
    public:
        Maestro();
        Maestro(string, int, int, string);
        void muestraDatos();
};

class Medico : public Persona {
    private:
        string especialidad;
        string cedula;
    public:
        Medico();
        Medico(string, int, string, string);
        void muestraDatos();
};

// Definir los métodos de la clase Persona
Persona::Persona() {
    nombre = "Rosita Fresita";
    edad = 18;
}
// Constructor con parámetros 
Persona::Persona(string _nombre, int _edad) {
    nombre = _nombre;
    edad = _edad;
}

void Persona::muestraDatos() {
    cout << endl << "Datos de persona:" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

// Métodos clase Estudiante
Estudiante::Estudiante() : Persona() {
    matricula = 0;
    carrera = "Sin carrera";
}
Estudiante::Estudiante(string _nombre, int _edad, int _matricula ,string _carrera) : Persona(_nombre, _edad) {
    matricula = _matricula;
    carrera = _carrera;
}
void Estudiante::muestraDatos() {
    // muestraDatos(); 
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Matrícula: " << matricula << endl;
    cout << "Carrera: " << carrera << endl;
}

// Métodos clase Maestro
Maestro::Maestro() : Persona() {
    nomina = 0;
    depto = "Sin depto";
}
Maestro::Maestro(string _nombre, int _edad, int _nomina, string _depto) : Persona(_nombre, _edad) {
    nomina = _nomina;
    depto = _depto;
}
void Maestro::muestraDatos() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Nomina: " << nomina << endl;
    cout << "Depto: " << depto << endl;
}

// Métodos clase Medico
Medico::Medico() : Persona() {
    especialidad = "Sin especialidad";
    cedula = "000";
}

Medico::Medico(string _nombre, int _edad, string _especialidad, string _cedula) : Persona(_nombre, _edad) {
    especialidad = _especialidad;
    cedula = _cedula;
}

void Medico::muestraDatos() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Especialidad: " << especialidad << endl;
    cout << "Cédula: " << cedula << endl;
}

int main() {
    Persona per1("Bryan", 25), per2;
    Estudiante est1("Bryan", 25, 3488, "ITC"), est2;
    Maestro mae1("Kevin", 20, 3434355, "Ciencias"), mae2;
    Medico med1("Juan", 35, "Odontología", "230"), med2;

    per1.muestraDatos();
    per2.muestraDatos();
    est1.muestraDatos();
    est2.muestraDatos();
    mae1.muestraDatos();
    mae2.muestraDatos();
    med1.muestraDatos();
    med2.muestraDatos();
    return 0;
}

// Ricardo Gaspar Ochoa - A00838841
// Germán Cueto - a00838445
// Javier Gomez - A01722931
// Leonardo Navarro - A01286259

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
};

class Medico : public Persona {
    private:
        string especialidad;
    public:
        Medico();
        Medico(string, int, string);
        void muestraMedico();
};

class Paciente : public Persona {
    private:
        string tratamiento;
        int pagos;
    public:
        Paciente();
        Paciente(string, int, string, int);
        void muestraPaciente();
        void muestraPagos();
        void muestraTratamiento();
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
    cout << "Mi nombre es: " << nombre << endl;
    cout << "Mi edad es: " << edad << endl;
}

// Métodos clase Medico
Medico::Medico() : Persona() {
    especialidad = "Sin especialidad";
}
Medico::Medico(string _nombre, int _edad, string _especialidad) : Persona(_nombre, _edad) {
    especialidad = _especialidad;
}
void Medico::muestraMedico() {
    muestraPersona(); 
    cout << "Mi especialidad es: " << especialidad << endl;
}

// Métodos clase Paciente
Paciente::Paciente() : Persona() {
    tratamiento = "Sin tratamiento";
    pagos = 0;
}

Paciente::Paciente(string _nombre, int _edad, string _tratamiento, int _pagos) : Persona(_nombre, _edad) {
    tratamiento = _tratamiento;
    pagos = _pagos;
}

void Paciente::muestraPaciente() {
    muestraPersona();
    cout << "Mi tratamiento es: " << tratamiento << endl;
    cout << "Mis pagos son: " << pagos << endl;
}
void Paciente::muestraPagos() {
    cout << "Mis pagos son: " << pagos << endl;
}
void Paciente::muestraTratamiento() {
    cout << "Mi tratamiento es: " << tratamiento << endl;
}

int main() {
    Persona per1("Bryan", 25), per2("Sergio", 18), per3;
    Medico med1("Kevin", 20, "Med Gral"), med2("Mario", 21, "Med Gral"), med3("Alexia", 19, "Dentista");
    Paciente pac1("Juan", 35, "Endodoncia", 100), pac2;

    // Muestra Persona
    per1.muestraPersona();
    per2.muestraPersona();
    per3.muestraPersona();

    med1.muestraMedico();
    med2.muestraMedico();
    med3.muestraMedico();

    pac1.muestraPaciente();
    pac2.muestraPaciente();
    return 0;
}

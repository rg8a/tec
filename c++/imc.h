// Ricardo Gaspar Ochoa - A00838841
// Este programa calcula el índice de masa coorporal

#include <iostream>
using namespace std;

class Imc {
    private:
        float estatura;
        float peso;
        float resultado;
    public:
        float calculaImc();
        void setEstatura(float miEstatura);
        void setPeso(float miPeso);
        void capturaDatos();
        void muestraResultado();
        float getEstatura();
        float getPeso();
};

float Imc :: calculaImc() {
    if (estatura <= 0 || peso <= 0){
        resultado = 0;
        return resultado;
    }
    else {
        resultado = peso/(estatura * estatura);
        return resultado;
    }
}

void Imc :: setEstatura(float miEstatura){
    estatura = miEstatura;
}

void Imc :: setPeso(float miPeso){
    peso = miPeso;
}

void Imc :: capturaDatos() {
    cin >> peso;
    cin >> estatura;
}

void Imc :: muestraResultado() {
    if (resultado == 0){
        cout << "ERROR" << "\n";
    } else if (resultado < 20){
        cout << "PESO BAJO" << "\n";
    } else if (resultado >= 20 && resultado < 25) {
        cout << "NORMAL" << "\n";
    } else if (resultado >= 25 && resultado < 30) {
        cout << "SOBRE PESO" << "\n";
    } else if (resultado >= 30 && resultado < 40) {
        cout << "OBESIDAD" << "\n";
    } else {
        cout << "OBESIDAD MORBIDA" << "\n";
    }
}

float Imc :: getEstatura() {
    return estatura;
}

float Imc :: getPeso() {
    return peso;    
}

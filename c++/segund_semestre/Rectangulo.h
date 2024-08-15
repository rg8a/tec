#include <iostream>
using namespace std;

class Rectangulo {
    private:
        float largo;
        float ancho;
    public:
        float calculaArea();
        void setLargo(float miLargo);
        void setAncho(float miAncho);
        void muestraArea();
        void capturaDatos();
        float getLargo();
        float getAncho();
};

float Rectangulo :: calculaArea() {
    float resultado;
    resultado = largo * ancho;
    return resultado;
}

void Rectangulo :: setLargo(float miLargo){
    largo = miLargo;
}

void Rectangulo :: setAncho(float miAncho){
    ancho = miAncho;
}

void Rectangulo :: capturaDatos() {
    cout << "Dame el largo del rectangulo:";
    cin >> largo;
    cout << "Dame el ancho del rectangulo:";
    cin >> ancho;
}

void Rectangulo :: muestraArea() {
    cout << "el area de largo=" << largo << " y ancho=" << ancho << " es " << calculaArea();    
}

float Rectangulo :: getLargo() {
    return largo;
}

float Rectangulo :: getAncho() {
    return ancho;    
}

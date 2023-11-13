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
void Rectangulo :: muestraArea(){
    cout << "el áreas es:" << calculaArea();
}
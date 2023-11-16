#include <iostream>
using namespace std;

class Triangulo {
    private:
        float altura;
        float base;
    public:
        float calculaArea();
        void setaltura(float mialtura);
        void setbase(float mibase);
        void muestraArea();
        void capturaDatos();
        float getaltura();
        float getbase();
};

float Triangulo :: calculaArea() {
    float resultado;
    resultado = (altura * base)/2;
    return resultado;
}

void Triangulo :: setaltura(float mialtura){
    altura = mialtura;
}

void Triangulo :: setbase(float mibase){
    base = mibase;
}

void Triangulo :: capturaDatos() {
    cin >> altura;
    cin >> base;
}

void Triangulo :: muestraArea() {
    cout << calculaArea();    
}

float Triangulo :: getaltura() {
    return altura;
}

float Triangulo :: getbase() {
    return base;    
}

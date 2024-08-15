//Actividad de clase

//Riacrdo Gaspar Ochoa - A00838841
//Leonardo Navarro - A01286259
//Javier Gomez -A01722931 

// Este programa crea y manipula las clases Figura., Cuadrado, Triangulo y Circulo en relacion de herencia, 
// siendo Figura la clase Base.

// Incluir librerias
#include <iostream>
using namespace std;


// Declarar la clase Padre
class Figura{
protected:
    int numLados;
    string colorFigura;
    
public:
    Figura();
    Figura(int, string);
    
    virtual void muestraDatos();
    virtual void calculaArea();
    virtual void dibuja();
};

// Declaramos las clases derivadas

class Cuadrado: public Figura{
private:
    float tamano;

public:
    Cuadrado();
    Cuadrado(int, string, float);
    
    void muestraDatos();
    void calculaArea();
    void dibuja();
};

class Triangulo: public Figura{
private:
    float base;
    float altura;

public:
    Triangulo();
    Triangulo(int, string, float, float);
    
    void muestraDatos();
    void calculaArea();
    void dibuja();
};

class Circulo: public Figura{
private:
    float radio;

public:
    Circulo();
    Circulo(int, string, float);
    
    void muestraDatos();
    void calculaArea();
    void dibuja();
};

// Definir los métodos

Figura::Figura(){
    numLados = 1;
    colorFigura = "Sin Color";
}

Figura::Figura(int _numLados, string _colorFigura){
    numLados = _numLados;
    colorFigura = _colorFigura;
}

void Figura::muestraDatos(){
    cout << endl << "Figura: " << endl;
    cout << "Numero de lados: " << numLados << endl;
    cout << "Color: " << colorFigura << endl;
}

void Figura::calculaArea(){
    cout << endl << "Se trata de una figura que no sabemos ni como es" << endl;
    cout << "por lo que tampoco podemos saber calcular su área" << endl;
}

void Figura::dibuja(){
    cout << endl << "Dibuja de Figura: " << endl;
    cout << "Abstracto y filosófico porque no sabemos como es" << endl;
}

Cuadrado::Cuadrado():Figura(){
    tamano = 5;
}

Cuadrado::Cuadrado(int _numLados, string _colorFigura, float _tamano):Figura(_numLados, _colorFigura){
    tamano = _tamano;
}

void Cuadrado::muestraDatos(){
    cout << endl << "Figura Cuadrado: " << endl;
    cout << "Numero de Lados: " << numLados << endl;
    cout << "Color: " << colorFigura << endl;
    cout << "Medida de los lados: " << tamano << endl;
}

void Cuadrado::calculaArea(){
    cout << endl << "Área de cuadrado: " << tamano * tamano << endl;
}

void Cuadrado::dibuja(){
    cout << endl << "* * * * *" << endl;
    cout << "* * * * *" << endl;
    cout << "* * * * *" << endl;
    cout << "* * * * *" << endl;
    cout << "* * * * *" << endl;
}

// Triangulo
Triangulo::Triangulo():Figura(){
    base = 5;
    altura = 8;
}

Triangulo::Triangulo(int _numLados, string _colorFigura, float _base, float _altura):Figura(_numLados, _colorFigura){
    base = _base;
    altura = _altura;
}

void Triangulo::muestraDatos(){
    cout << endl << "Figura Triángulo: " << endl;
    cout << "Numero de Lados: " << numLados << endl;
    cout << "Color: " << colorFigura << endl;
    cout << "Medida de la base: " << base << endl;
    cout << "Medida de la altura: " << altura << endl;
}

void Triangulo::calculaArea(){
    cout << endl << "El área del Triángulo es: " << (base * altura) / 2 << endl;
}

void Triangulo::dibuja(){
    cout << endl << "            * " << endl;
    cout << "          * * *" << endl;
    cout << "        * * * * *" << endl;
    cout << "      * * * * * * *" << endl;
    cout << "    * * * * * * * * *" << endl;
    cout << "  * * * * * * * * * * *" << endl;
    cout << "* * * * * * * * * * * * *" << endl;
}

// Circulo
Circulo::Circulo():Figura(){
    radio = 5;
}

Circulo::Circulo(int _numLados, string _colorFigura, float _radio):Figura(_numLados, _colorFigura){
    radio = _radio;
}

void Circulo::muestraDatos(){
    cout << endl << "Figura Círculo: " << endl;
    cout << "Radio: " << radio << endl;
    cout << "Color: " << colorFigura << endl;
}

void Circulo::calculaArea(){
    cout << endl << "El área del Círculo es: " << (3.1416 * (radio * radio)) << " m" << endl;
}

void Circulo::dibuja(){
    cout << endl << "         * * * *" << endl;
    cout << "      *           *" << endl;
    cout << "    *               *" << endl;
    cout << "  *                   *" << endl;
    cout << "  *                   *" << endl;
    cout << "    *               *" << endl;
    cout << "      *           *" << endl;
    cout << "         * * * *" << endl;
}


// Crear y maniular objetos en el main

int main(){
    Figura fig1(5, "Rosa"), fig2(4, "Verde"), fig3(4, "Azul"), fig4;
    Cuadrado cuad1(4, "Amarillo", 10), cuad2(4, "Morado", 100), cuad3;
    Triangulo tri1(3, "Negro", 5, 10), tri2(3, "Celeste", 7, 15), tri3;
    Circulo cir(0, "Rojo", 10);

    fig1.muestraDatos();
    fig1.calculaArea();
    fig1.dibuja();
    
    fig2.muestraDatos();
    fig2.calculaArea();
    fig2.dibuja();
    
    fig3.muestraDatos();
    fig3.calculaArea();
    fig3.dibuja();
    
    cuad1.muestraDatos();
    cuad1.calculaArea();
    cuad1.dibuja();
    
    cuad2.muestraDatos();
    cuad2.calculaArea();
    cuad2.dibuja();
    
    cuad3.muestraDatos();
    cuad3.calculaArea();
    cuad3.dibuja();
    
    tri1.muestraDatos();
    tri1.calculaArea();
    tri1.dibuja();
    
    tri2.muestraDatos();
    tri2.calculaArea();
    tri2.dibuja();
    
    tri3.muestraDatos();
    tri3.calculaArea();
    tri3.dibuja();

    cir.muestraDatos();
    cir.calculaArea();
    cir.dibuja();
    return 0;
}
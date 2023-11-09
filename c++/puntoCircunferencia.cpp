// Ricardo Gaspar Ochoa - A00838841
// Este programa trabaja con la formula general
#include <iostream>
#include <cmath>
using namespace std;

char imprimir_resultado(float &radio, float &resultado){
    //Salida
    if (radio > resultado){
        cout << "DENTRO" << "\n";
    } else {
        if (radio < resultado){
            cout << "FUERA" << "\n";
        } else{
            cout << "SOBRE" << "\n";
        }
    }
}

void calcular_posicion(float &resultado,float &radio, float &coordenada_x1, float &coordenada_y1,float &coordenada_x2, float &coordenada_y2 ){
    // Decllara Variables
    float defX = coordenada_x2 - coordenada_x1;
    float defY = coordenada_y2 - coordenada_y1;
    float exp2x = defX * defX;
    float exp2y = defY * defY;
    float radicando = exp2x + exp2y;
    // Calcular 
    resultado = sqrt(radicando);
}

void captura_radio(float &radio){
    // Mostrar los valores
    cout << "Intorduce el radio:";
    cin >> radio;
}

void datos_coordenadas(float &coordenada_x1, float &coordenada_y1,float &coordenada_x2, float &coordenada_y2){
    //Entrada
    cout << "Intorduce el valor de x1:";
    cin >> coordenada_x1;

    cout << "Intorduce el valor de y1:";
    cin >> coordenada_y1;
    
    cout << "Intorduce el valor de x2:";
    cin >> coordenada_x2;
    
    cout << "Intorduce el valor de y2:";
    cin >> coordenada_y2;
}

int main() {
    // Declarar variables
    float radio;
    float coordenada_x1;
    float coordenada_y1;
    float coordenada_x2;
    float coordenada_y2;
    float resultado;
    
    // Entradas
    cout << "Formula general: \n";
    captura_radio(radio);
    datos_coordenadas(coordenada_x1, coordenada_y1, coordenada_x2, coordenada_y2);
    cout << "\n";

    // Procesos
    calcular_posicion(resultado, radio, coordenada_x1, coordenada_y1, coordenada_x2, coordenada_y2);

    // Salidas
    imprimir_resultado(radio, resultado);

    return 0;
}
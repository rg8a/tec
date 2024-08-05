// Ricardo Gaspar Ochoa - A00838841
// Este programa trabaja con la formula general
#include <iostream>
<<<<<<< HEAD
=======
#include <cmath>
>>>>>>> 0414bf34426821c29efab679aa3c00bf86429995
using namespace std;

void imprimir_resultado(float valor_positivo, float valor_negativo){
    cout << "(" << valor_positivo << "," << valor_negativo << ")" << "\n";
}

<<<<<<< HEAD
void formula_general(float a, float b, float c,float &resultado_mas, float &resultado_menos){
    float formula_mas  = (-b + sqrt((b*b) -( 4 * (a * c))))/(2*a);
    float formula_menos  = (-b - sqrt((b*b) -( 4 * (a * c))))/(2*a);
=======
void formula_general(float coeficiente_a, float coeficiente_b, float coeficiente_c,float &resultado_mas, float &resultado_menos){
    float formula_mas  = (-coeficiente_b + sqrt((coeficiente_b*coeficiente_b) -( 4 * (coeficiente_a * coeficiente_c))))/(2*coeficiente_a);
    float formula_menos  = (-coeficiente_b - sqrt((coeficiente_b*coeficiente_b) -( 4 * (coeficiente_a * coeficiente_c))))/(2*coeficiente_a);
>>>>>>> 0414bf34426821c29efab679aa3c00bf86429995

    resultado_mas = formula_mas;
    resultado_menos = formula_menos; 
}

void datos_entrada(float &coeficiente_a, float &coeficiente_b,float &coeficiente_c, float &resultado_mas, float &resultado_menos){
    // Mostrar los valores
    cout << "Intorduce el valor de a:";
<<<<<<< HEAD
    std::cin >> coeficiente_a;

    cout << "Intorduce el valor de a:";
    std::cin >> coeficiente_b;

    cout << "Intorduce el valor de a:";
    std::cin >> coeficiente_c;
=======
    cin >> coeficiente_a;

    cout << "Intorduce el valor de a:";
    cin >> coeficiente_b;

    cout << "Intorduce el valor de a:";
    cin >> coeficiente_c;
>>>>>>> 0414bf34426821c29efab679aa3c00bf86429995
    
    formula_general(coeficiente_a, coeficiente_b, coeficiente_c, resultado_mas, resultado_menos);
}


int main() {
    // Declarar variables
    float coeficiente_a;
    float coeficiente_b;
    float coeficiente_c;
    float resultado_mas;
    float resultado_menos;
    
    // Entradas

    // Procesos
    cout << "Formula general: \n";
    datos_entrada(coeficiente_a, coeficiente_b, coeficiente_c, resultado_mas, resultado_menos);
    cout << "\n";

    // Salidas
    imprimir_resultado(resultado_mas, resultado_menos);

    return 0;
}
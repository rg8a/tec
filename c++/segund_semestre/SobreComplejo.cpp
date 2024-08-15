// Fátima Castillo Aguirre A00838972
// Vania Díaz Hernández - A00839081
// Ricardo Gaspar Ochoa - A00838841
// Sharon Michelle Viramontes Hinojosa - A01198635
// Crea y manipula objetos de la case Complejo, utilizando sobrecarga del
// operador +

#include <iostream>
using namespace std;
// Declarar la clase Complejo
class Complejo {
private:
  int real;
  int imaginaria;

public:
  Complejo();
  Complejo(int, int);
  void muestraComplejo();
  // Sobrecargar operador
  // conretorno complejo pertenenciente a la clase complejo. palanra reservada
  // operator. revise un complejo como parámetro
  Complejo operator+(Complejo);
  Complejo operator-(Complejo);
};

// Definciión de los métodos
Complejo::Complejo() {
  real = 1;
  imaginaria = 1;
}

Complejo::Complejo(int _real, int _imaginaria) {
  // Asignar valores según parámetros
  real = _real;
  imaginaria = _imaginaria;
}

void Complejo::muestraComplejo() {
  cout << endl
       << "Número complejo: " << real << " + " << imaginaria << "i" << endl;
}

Complejo Complejo::operator+(Complejo c2) {
  // Sumar la parte real y la parte imaginaria del objeto que manda a llamar al
  // metodo con el parámetro
  int realNuevo,
      imaginariaNueva; // Declaramos las variables para realizar la suma

  // Realizar la suma
  realNuevo = real + c2.real; // Sumar la parte reald e los numeros complejos
  imaginariaNueva = imaginaria + c2.imaginaria; // Sumando las partes
                                                // imaginarias

  // Crear un objeto de la clase complejo con los atributos calculados

  Complejo nuevo(realNuevo, imaginariaNueva);

  return nuevo;
}

// Resta
Complejo Complejo::operator-(Complejo c3) {
  // estar la parte real y la parte imaginaria del objeto que manda a llamar al
  // metodo con el parámetro
  int realNuevo,
      imaginariaNueva; // Declaramos las variables para realizar la resta

  // Realizar la resta
  realNuevo = real - c3.real; // Restar la parte reald e los numeros complejos
  imaginariaNueva = imaginaria - c3.imaginaria; // Restando las partes imaginarias

  // Crear un objeto de la clase complejo con los atributos calculados

  Complejo nuevo(realNuevo, imaginariaNueva);

  return nuevo;
}

// Crear objetos en el main y a manipularlos
int main() {
  // Crear o instnacias numeros complejos
  Complejo comp1(3, 5), comp2(4, 7), comp3(2, 8), comp4, comp5, comp6;

  // Mostrar los complejos
  comp1.muestraComplejo();
  comp2.muestraComplejo();
  comp3.muestraComplejo();
  comp4.muestraComplejo();
  comp5.muestraComplejo();
  comp6.muestraComplejo();

  // sumar complejos ya con el operador + sobrecargado
  cout << endl << "sumando el complejo 1 con el complejo 2" << endl;
  comp4 = comp1 + comp2;
  comp4.muestraComplejo();

  cout << endl << "sumando el complejo 2 con el complejo 3" << endl;
  comp5 = comp2 + comp3;
  comp5.muestraComplejo();

  cout << endl << "sumando el complejo 1  2 y 3" << endl;
  comp5 = comp1 + comp2 + comp3;
  comp5.muestraComplejo();

  // Restar dos números complejos
  cout << endl << "Resta de complejo 2 y 3" << endl;
  comp6 = comp2 - comp3;
  comp6.muestraComplejo();

  return 0;
}
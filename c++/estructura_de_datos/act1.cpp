// Ricardo Gaspar Ochoa - A00838841
// Este programa es la actividad 1.1 la cual crea funciones iterativas, recursivas y su análisis de complejidad.

#include <iostream>

// Calculando la suma de 1 a n de forma iterativa.
//  Complejidad: lineal  O(n)
int sumaIterativa(int number)
{
    int suma = 0;
    for (int i = 1; i <= number; ++i)
    {
        suma += i;
    }
    return suma;
}

// Calculando la suma de 1 a n de forma recursiva.
// Complejidad: lineal  O(n)
int sumaRecursiva(int number)
{
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return number + sumaRecursiva(number - 1);
    }
}

// Calcular la suma de 1 a n de forma directa usando la fórmula matemática.
//  Complejidad: constante  O(1)
int sumaDirecta(int number)
{
    return number * (number + 1) / 2;
}

// Calculando el número de iteraciones necesarias para llegar a 1 con el método 3n + 1.
// Complejidad:  O(log n)
int O3nPlusOne(int number)
{
    if (number == 1)
    {
        return 0;
    }
    else if (number % 2 == 0)
    {
        return 1 + O3nPlusOne(number / 2);
    }
    else
    {
        return 1 + O3nPlusOne(3 * number + 1);
    }
}

int main()
{
    // Declaración de la variable
    int number;

    std::cout << "Ingresa un número entero positivo: ";
    std::cin >> number;

    // Manejo de error con la varible number
    if (number <= 0)
    {
        std::cout << "El número debe ser un entero positivo." << std::endl;
        return 1;
    }
    // Salidas
    std::cout << "Suma iterativa: " << sumaIterativa(number) << std::endl;
    std::cout << "Suma recursiva: " << sumaRecursiva(number) << std::endl;
    std::cout << "Suma directa: " << sumaDirecta(number) << std::endl;
    std::cout << "Número de pasos para llegar a 1 con el método 3n + 1: " << O3nPlusOne(number) << std::endl;

    return 0;
}

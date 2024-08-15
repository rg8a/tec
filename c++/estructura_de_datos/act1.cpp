// Ricardo Gaspar Ochoa - A00838841
#include <iostream>

/**
 * @brief Calcular la suma de 1 a n de forma iterativa.
 * 
 * @param n Un entero positivo.
 * @return La suma de 1 a n.
 * 
 * @note Complejidad: O(n)
 */
int sumatorioIterativo(int n) {
    int suma = 0;
    for (int i = 1; i <= n; ++i) {
        suma += i;
    }
    return suma;
}

/**
 * @brief Calcular la suma de 1 a n de forma recursiva.
 * 
 * @param n Un entero positivo.
 * @return La suma de 1 a n.
 * 
 * @note Complejidad: O(n) (profundidad de la recursión)
 */
int sumaRecursiva(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumaRecursiva(n - 1);
    }
}

/**
 * @brief Calcular la suma de 1 a n de forma directa usando la fórmula matemática.
 * 
 * @param n Un entero positivo.
 * @return La suma de 1 a n.
 * 
 * @note Complejidad: O(1)
 */
int sumaDirecta(int n) {
    return n * (n + 1) / 2;
}

/**
 * @brief Calcular el número de iteraciones necesarias para llegar a 1 con el método 3n + 1.
 * 
 * @param n Un entero positivo.
 * @return La cantidad de pasos necesarios para finalizar en 1.
 * 
 * @note Complejidad: No se requiere cálculo de complejidad.
 */
int O3nPlusOne(int n) {
    if (n == 1) {
        return 0;
    } else if (n % 2 == 0) {
        return 1 + O3nPlusOne(n / 2);
    } else {
        return 1 + O3nPlusOne(3 * n + 1);
    }
}

int main() {
    int n;

    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "El número debe ser un entero positivo." << std::endl;
        return 1;
    }

    std::cout << "Suma iterativa: " << sumatorioIterativo(n) << std::endl;
    std::cout << "Suma recursiva: " << sumaRecursiva(n) << std::endl;
    std::cout << "Suma directa: " << sumaDirecta(n) << std::endl;
    std::cout << "Número de pasos para llegar a 1 con el método 3n + 1: " << O3nPlusOne(n) << std::endl;

    return 0;
}

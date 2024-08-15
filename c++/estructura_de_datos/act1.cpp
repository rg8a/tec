#include <iostream>

// Función para calcular la suma de 1 a n de forma iterativa
int sumatorioIterativo(int n) {
    int suma = 0;
    for (int i = 1; i <= n; ++i) {
        suma += i;
    }
    return suma;
}

// Función para calcular la suma de 1 a n de forma recursiva
int sumaRecursiva(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumaRecursiva(n - 1);
    }
}

// Función para calcular la suma de 1 a n de forma directa
int sumaDirecta(int n) {
    return n * (n + 1) / 2;
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

    return 0;
}

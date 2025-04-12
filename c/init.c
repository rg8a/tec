#include <stdio.h>

int main() {
    int num1, num2, num3, suma, resultado;

    printf("Calificación 1\n");
    scanf("%i", &num1);
    printf("Calificación 2\n");
    scanf("%i", &num2);
    printf("Calificación 3\n");
    scanf("%i", &num3);

    suma = num1 + num2 + num3;
    resultado = suma/3;

    if (resultado >= 7){
        printf("El alumno pasó");
    } else {
        printf("El alumno no pasó");
    }

    printf("Promedio es de: \n");
    printf("%i", resultado);

    return 0;
}

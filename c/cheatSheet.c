// TIPOS DE DATOS BÁSICOS
int              // Números enteros
float            // Números decimales
double           // Decimales de doble precisión
char             // Caracteres individuales
void             // Sin tipo/valor

// DECLARACIÓN DE VARIABLES
int numero = 5;              // Declaración con inicialización
float precio;                // Declaración sin inicializar
const int MAXIMO = 100;      // Constante

// OPERADORES
+, -, *, /      // Operadores aritméticos básicos
%               // Módulo (resto de división)
==, !=          // Igualdad, desigualdad
<, >, <=, >=    // Comparación
&&, ||, !       // Operadores lógicos (AND, OR, NOT)
++, --          // Incremento, decremento

// ESTRUCTURAS DE CONTROL
if (condicion) {
    // código
} else {
    // código alternativo
}

while (condicion) {
    // se repite mientras la condición sea verdadera
}

for (int i = 0; i < 10; i++) {
    // se repite un número específico de veces
}

// FUNCIONES
int suma(int a, int b) {
    return a + b;
}

// ARRAYS
int numeros[5];           // Array de 5 enteros
char texto[50];          // Array de caracteres (string)

// PUNTEROS
int *ptr;                // Declaración de puntero
ptr = &variable;         // Asignación de dirección
*ptr                     // Desreferenciación

// ENTRADA/SALIDA BÁSICA
printf("Hola %d\n", numero);    // Imprime en consola
scanf("%d", &numero);           // Lee de consola

// ESTRUCTURAS
struct Persona {
    char nombre[50];
    int edad;
};

// ------------ DIRECTIVAS DEL PREPROCESADOR -------------- //
#include <stdio.h>    // Incluir biblioteca estándar
#define MAX 100       // Definir constante

// GESTIÓN DE MEMORIA
malloc()             // Asignar memoria dinámicamente
free()              // Liberar memoria
calloc()            // Asignar y inicializar memoria
realloc()           // Redimensionar memoria asignada

// TYPEDEF
typedef struct Persona Persona;  // Crear alias para tipos

// ENUMERACIONES
enum Dias {LUNES, MARTES, MIERCOLES};


// ----------- placeholders --------------- //
%d    // Para números enteros (int)
%f    // Para números decimales (float/double)
%c    // Para caracteres individuales (char)
%s    // Para cadenas de caracteres (strings)
%x    // Para números en hexadecimal
%p    // Para punteros
%lu   // Para enteros largos sin signo (unsigned long)
%lf   // Para double

%.2f   // Controla el número de decimales
%5d    // Establece el ancho mínimo del campo
%-5d   // Alinea a la izquierda en un campo de 5 espacios
%05d   // Rellena con ceros
%+d    // Muestra siempre el signo (+ o -)

int edad = 25;
float altura = 1.75;
char nombre[] = "Juan";

// Imprimir valores
printf("Edad: %d años\n", edad);
printf("Altura: %.2f metros\n", altura);     // .2 limita a 2 decimales
printf("Me llamo %s y tengo %d años\n", nombre, edad);

// Múltiples placeholders en una línea
printf("Datos: %s tiene %d años y mide %.2f metros\n", 
       nombre, edad, altura);

// Control de espacios y alineación
printf("%10d\n", edad);     // Reserva 10 espacios, alinea a la derecha
printf("%-10d\n", edad);    // Reserva 10 espacios, alinea a la izquierda
printf("%05d\n", edad);     // Rellena con ceros a la izquierda



int numero;
char texto[50];

scanf("%d", &numero);          // Lee un entero
scanf("%s", texto);           // Lee una cadena
scanf("%d %s", &numero, texto); // Lee múltiples valores
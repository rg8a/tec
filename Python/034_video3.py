# Ricardo Gaspar Ochoa
# A00838841
# Mas sobre contadores usando while

# Se define una función con un parámetro
def contar(limite):
    # Imprimo el nombre de la función solo para tener una referencia en consola
    print('contar:')
    # Se declara una variable con el valor de 1, el inicio
    contador = 1
    # Se declara un while con condición variable contador menor o igual
    # al valor del parámetro
    while contador <= limite:
        # Se imprime el valor de la variable contador
        print(contador)
        # Se suma 1 al valor del contador para repetir el loop 
        contador = contador + 1

# Se define una función con un parámetro
def contar_2_en_2(limite):
    # Imprimo el nombre de la función solo para tener una referencia en consola
    print('contar_2_en_2:')
    # Se declara una variable con el valor de 0, el inicio
    contador = 0
    # Se declara un while con condición variable contador menor o igual
    # al valor del parámetro
    while contador <= limite:
        # Se imprime el valor de la variable contador
        print(contador)
        # Se suma 2 al valor del contador para repetir el loop 
        contador = contador + 2

# Se define una función con un parámetro para iniciar el conteo
def cuenta_regresiva(inicio):
    # Imprimo el nombre de la función solo para tener una referencia en consola
    print('cuenta_regresiva:')
    # Se declara una variable con el valor del parámetro
    cont = inicio
    # Se declara un while con condición variable contador mayor o igual a 0
    while cont >= 0:
        # Se imprime el valor de la variable contador
        print(cont)
        # Se resta 1 al valor del contador para repetir el loop 
        cont = cont - 1

# Se define una finción para ejecutar al iniciar el programa
def main():
    # Se imprime la instrucción del programa
    print('Teclea un número')
    # Se declara una variable que se valida al ser ingresado por el usuario
    numero = int(input())
    # Se pasa como argumento el valor de la variable declarada (numero) a cada función
    contar(numero)
    contar_2_en_2(numero)
    cuenta_regresiva(numero)

# Se ejecuta la función que da inicio al programa
main()
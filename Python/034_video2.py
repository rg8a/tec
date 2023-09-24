# Ricardo Gaspar Ochoa
# A00838841
# El concepto contador

# Se define una función con un parámetro
def contar(limite):
    # Se declara una variable con el valor de 1, el inicio
    contador = 1
    # Se declara un while con condición variable contador menor o igual
    # al valor del parámetro
    while contador <= limite:
        # Se imprime el valor de la variable contador
        print(contador)
        # Se suma 1 al valor del contador para repetir el loop 
        contador = contador + 1

# Se define una finción para ejecutar al iniciar el programa
def main():
    # Se imprime la instrucción del programa
    print('Teclea un número')
    # Se declara una variable que se valida al ser ingresado por el usuario
    numero = int(input())
    # Se pasa como argumento el valor de la variable declarada (numero) 
    contar(numero)

# Se ejecuta la función que da inicio al programa
main()
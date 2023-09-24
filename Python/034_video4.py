# Ricardo Gaspar Ochoa
# A00838841
# Sumar números usando while


# Se define una finción para ejecutar al iniciar el programa
def main():
    # Se declara e inicializa en 0 una variable que imprimirña el total.
    suma = 0
    # Se declara una variable que se valida el tipo de dato al ser ingresado por el usuario
    numero = int(input())
    # Se declara in while con la condición numero distinto a -1
    while numero != -1:
        # Se suma el valos de la variable mas el numero ingresado
        suma = suma + numero
        # Se pide al unsuario un nuevo valor a ingresar y se valida el tipo de dato
        numero = int(input())
    # Se imprime el total sumado al cortar el loop
    print(suma)

# Se ejecuta la función que da inicio al programa
main()
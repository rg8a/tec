

# Ricardo Gaspar Ochoa
# A00838841
# Ejercicio 3

print('\n')
n = input('Número: ')

def divisores(numero):
    suma = 0
    i = 1
    while i < n:
        if numero % i == 0:
            suma += i
        i += 1   
    if suma == n:
        return print('Es perfecto\n')
    elif suma != n:
        return print('No es perfecto\n')

try:
    n = int(n)
    if n < 0:
       print("Debe ser positivo\n")

    divisores(n)

except ValueError:
    print("Debes de introducir números enteros\n")


    
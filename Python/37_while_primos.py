
# Ricardo Gaspar Ochoa
# A00838841
# Ejercicio 3 - Primos

print('\n')
a = input('Rango de inicio: ') 
b = input('Rango del fin: ')

try:
    a = int(a)
    b = int(b)

    if a >= b:
        print("a debe ser menor\n")

    for number in range(a, b):
        if number > 1:
            contador = 0
            i = 2
            while i < number and contador == 0:
                if number % i == 0:
                    contador += 1
                i += 1
            if contador == 0:
                print(number)

except ValueError:
    print("Debes de introducir números enteros")


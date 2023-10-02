

# Ricardo Gaspar Ochoa
# A00838841
# Ejercicio 1

print('\n')
a = input('Valor de a: ') 
b = input('Valor de b: ')

try:
    a = int(a)
    b = int(b)

    if a >= b:
       print("a debe ser menor\n")

    while a <= b:
        while a % 2 == 0:
            print(a)
            a = a+1
        a = a+1

except ValueError:
    print("Debes de introducir números enteros")

    
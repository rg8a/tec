import math

ancho = input('Introduce el ancho: ')
largo = input('Introduce el largo: ')

try:
    ancho = float(ancho)
    largo = float(largo)
    suma_de_cuadrados = pow(ancho, 2)+pow(largo, 2)
    diagonal = math.sqrt(suma_de_cuadrados)

    print (f"La diagonal es:",diagonal)

except ValueError:
    print("Debes de Introducir un número")

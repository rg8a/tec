import math

superficie = input('Introduce la superficie a pintar en metros cuadrados: ')
metros_por_litros = input('Introduce los m2 x litro de pintura: ')

try:
    superficie = float(superficie)
    metros_por_litros = float(metros_por_litros)
    litros_por_superficie = math.ceil(superficie/metros_por_litros)

    print ("La cantidad de litros a comprar: ", litros_por_superficie)

except ValueError:
    print("Debes de Introducir un número")

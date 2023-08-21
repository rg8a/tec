import math

radio_input = input('Introduce el valor del radio: ')

try:
    radio = int(radio_input)
    square_radio = pow(radio, 2)
    cube_radio = pow(radio, 3)
    area = (4 * math.pi) * square_radio
    volumen = ((4 * math.pi) * cube_radio)/3
    print (f"El área de la esfera es:, {area: 0.6}")
    print (f"El Volumen de la esfera es:, {volumen: 0.4}")

except ValueError:
    print("Debes de Introducir un número")

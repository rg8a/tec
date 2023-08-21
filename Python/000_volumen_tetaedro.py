longitud = input('Introduce el valor de valor de la arista del tetaedro: ')

try:
    longitud = int(longitud)
    volumen = (((longitud*longitud)*longitud)*1.414)/12
    print(f"El volumen del tetraedro es:, {volumen: 0.3}")
except ValueError:
    print("Debes de Introducir un número")

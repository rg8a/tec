
year = int(input('Introduce un año:'))

try:
    if int(year):
        if year % 4 != 0:
            print("FALSE")
        elif year % 4 == 0 and year % 100 != 0:
            print("TRUE")
        elif year % 4 == 0 and year % 100 == 0 and year % 400 != 0:
            print("FALSE")
        elif year % 4 == 0 and year % 100 == 0 and year % 400 == 0: 
            print("TRUE")
    else:
        print("Debes de Introducir un número entero")

except ValueError:
    print("Debes de Introducir números enteros")

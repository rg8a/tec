year = input('Introduce un año en números:')

try:
    year = int(year)
    def es_bisiesto(year):
        if int(year):
            if year % 4 != 0:
                print("False")
            elif year % 4 == 0 and year % 100 != 0:
                print("True")
            elif year % 4 == 0 and year % 100 == 0 and year % 400 != 0:
                print("False")
            elif year % 4 == 0 and year % 100 == 0 and year % 400 == 0: 
                print("True")
        else:
            print("Debes de Introducir un número entero")
            
    es_bisiesto(year)
except ValueError:
    print("Debes de Introducir números enteros")

# Ricardo Gaspar Ochoa
# A00838841

# Ricardo Gaspar Ochoa
# A00838841

try:
    niveles = int(input('\nNúmero de niveles: '))

    if niveles > 0:
        for i in range(0,niveles+1):
            linea=(i)*" *"
            print(linea.center(50))
    else:
        print('Debe ser un número entero positivo\n')
    print('\n')
except ValueError:
    print('Debe ser un número entero positivo\n')
    

# Ricardo Gaspar Ochoa
# A00838841

try:
    niveles = int(input('\nNúmero: '))

    if niveles > 0:
        for i in range(1,niveles+1):
            print(i)
            i=-1
    else:
        print('Debe ser un número entero positivo\n')
    print('\n')
except ValueError:
    print('Debe ser un número entero positivo\n')
    
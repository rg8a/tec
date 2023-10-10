
# Ricardo Gaspar Ochoa
# A00838841

try:
    print('\n')
    entrada = input('Número: ')
    entrada = int(entrada)

    listaPrimos = []
    suma = 0

    while entrada >= 0:
        if entrada % 2 == 0:
            listaPrimos.append(entrada)
        entrada = int(input('Número: '))

    if entrada < 0:
        print('Total de no. primos: ',len(listaPrimos),'\n')

except ValueError:
    print("Debes de introducir números enteros\n")


# Ricardo Gaspar Ochoa
# A00838841
try:
    lista = []
    print('\n')

    while len(lista) < 5:
        a = input('Número: ')
        a = int(a)
        if a != 0 and a > 0:
            lista.append(a)

        if len(lista) == 5:
            print(lista)
            print('Promedio: ',sum(lista)/5)
            print('\n')

except ValueError:
    print("Debes de introducir números enteros")
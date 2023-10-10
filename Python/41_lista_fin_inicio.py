

# Ricardo Gaspar Ochoa
# A0083884110
try:
    lista = []
    print('\n')

    while len(lista) < 5:
        a = input('Número: ')
        a = int(a)
        if a != 0 and a > 0:
            lista.append(a)

        if len(lista) == 5:
            print('lista[-1]: ',lista[-1])
            print('lista[-2]: ',lista[-2])
            print('lista[-3]: ',lista[-3])
            print('lista[-4]: ',lista[-4])
            print('lista[-5]: ',lista[-5])
            print('\n')

except ValueError:
    print("Debes de introducir números enteros")
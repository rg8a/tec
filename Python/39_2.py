
# Ricardo Gaspar Ochoa
# A00838841

try:
    print('\n')
    a = input('Valor de uno: ')
    a = int(a)
    lista = []
    lista.append(a)
    suma = sum(lista)

    while a != 0:
        a = int(input('Nuevo valor: '))
        lista.append(a)
        suma = sum(lista)
    print('Suma: ',suma)
    print('Cantidad de numeros: ',len(lista))
    print('\n')

except ValueError:
    print("Debes de introducir números enteros")
    
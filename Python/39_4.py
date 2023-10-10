
# Ricardo Gaspar Ochoa
# A00838841

try:
    print('\n')
    entrada = input('Clave: ')
    entrada = str(entrada)

    def suma_prod(entrada):
        lista = []
        suma = 0

        while entrada.lower() == 'a' or entrada.lower() == 'b' or entrada.lower() == 'c' or entrada.lower() == 'x':
            if entrada == 'a':
                lista.append(120)
                print(entrada, '$120')
            elif entrada == 'b':
                lista.append(250)
                print(entrada, '$250')
            elif entrada == 'c':
                lista.append(360)
                print(entrada, '$360')
            elif entrada == 'x':
                suma = sum(lista)
                break
            entrada = input('Clave: ').lower()
        
        print('Suma: ',suma)
        print('Cantidad de productos: ',len(lista))
        print('\n')

    suma_prod(entrada)   

except ValueError:
    print("Debes de introducir números enteros")
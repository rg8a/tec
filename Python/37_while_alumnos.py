
# Ricardo Gaspar Ochoa
# A00838841
# Alumnos foráneos vs Locales

print('\n')
total = input('Total de alumnos: ')

try:
    total = int(total)

    foraneos = []
    locales = []
    total_listas = len(foraneos) + len(locales)

    while total_listas < total:
        tipo = input('¿Eres Foráneo o Local? (F, L): ')
        tipo = str(tipo)

        if str(tipo):
            if tipo.lower() == 'f':
                foraneos.append(tipo)
            elif tipo.lower() == 'l':
                locales.append(tipo)
            else:
                print("Debes de introducir F o L\n")
        else:
            print("Debes de introducir letra F o L")

        total_listas = len(foraneos) + len(locales)

    print('Total de foraneos: ',len(foraneos))
    print('Total de locales: ',len(locales))
    print('\n')

except ValueError:
    print("Debes de introducir números enteros")


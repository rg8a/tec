
year = input('Introduce un año (Número):')
mes = input('Introduce un mes (Número):')
dia = input('Introduce un dia (Número):')

try:
    year  = int(year)
    mes  = int(mes)
    dia  = int(dia)

    if mes <= 12 and dia <= 31:
        if mes == 12 and dia == 31:
            print(year + 1)
            print(1)
            print(1)
        elif dia == 31 and mes == (1 or 3 or 5 or 7 or 8 or 10):
            print(year)
            print(mes + 1)
            print(1)
        elif dia < 31 :
            print(year)
            print(mes)
            print(dia + 1)
    else:
        print("Debes de introducir números válidos")

except ValueError:
    print("Debes de introducir números válidos")

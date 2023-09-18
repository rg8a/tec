binario = input('Introduce un numero binario:')

def binario_decimal(numero_binario):
    longitud = len(numero_binario)
    if longitud == 0:
        return print(-1)
        
    for digito in numero_binario:
        if digito != '0' and digito != '1':
            return print(-1)

    decimal = 0
    for i, digito in enumerate(numero_binario):
        if digito == '1':
            decimal += 2**(longitud - i - 1)

    return print(decimal)

binario_decimal(binario)

# Ricardo Gaspar Ochoa
# A00838841
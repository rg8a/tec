# Ricardo Gaspar Ochoa
# A00838841
# Tienda de sillas

# Variables para validar
sillas_validas = 'B b E e L l'
clientes_validos = 'N n F f'
silla_b = 700
silla_e = 900
silla_l = 1500

# Ricardo Gaspar Ochoa
def precio(tipo_de_silla, cantidad_de_sillas):
    if (tipo_de_silla == 'B' or tipo_de_silla == 'b'):
        return silla_b * cantidad_de_sillas
    elif (tipo_de_silla == 'E' or tipo_de_silla == 'e'):
        return silla_e * cantidad_de_sillas
    else:
        return silla_l * cantidad_de_sillas

# Ricardo Gaspar Ochoa
def descuento(precio, cliente):
    if (cliente == 'F' or cliente == 'f'):
        return round((precio*20)/100)
    elif ((cliente == 'N' ) or (cliente == 'n')):
        if (precio >= 10000 and precio < 20000):
            price_des = (precio*10)/100
            return round(price_des)
        elif (precio >= 20000):
            price_des = (precio*20)/100
            return round(price_des)
        else:
            return 0

        
# Ricardo Gaspar Ochoa
def precio_a_pagar(descuento, precio):
    desc = precio - descuento
    return desc

try:
    calcular_otro = 'si'
    while calcular_otro.lower() == 'si':
        tipo_de_silla = input('\nTipo de silla (B, E, L): ') 
        tipo_de_cliente = input('Tipo de cliente (N, F): ')
        cantidad_de_sillas = input('Número de sillas compradas: ')

        tipo_de_silla_valid = str(tipo_de_silla) and (tipo_de_silla in sillas_validas)
        tipo_de_cliente_valid = str(tipo_de_cliente) and (tipo_de_cliente in clientes_validos)
        cantidad_de_sillas = int(cantidad_de_sillas)

        if tipo_de_silla_valid and tipo_de_cliente_valid:
            precio_final = precio(tipo_de_silla, cantidad_de_sillas)
            descuento_aplicado = descuento(precio_final, tipo_de_cliente)
            print('Subtotal: $',precio_final)
            print('Descuento: $', descuento_aplicado)
            print('Total a pagar: $', precio_a_pagar(descuento_aplicado, precio_final))
        else:
            print("Debes de introducir valores como se indica")

        calcular_otro = input('¿Cobrar a otro cliente? Si o No:')

except ValueError:
    print("Debes de introducir valores como se indica")




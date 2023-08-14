precio_kilo = float(input('Introduce el precio por kilo: '))
peso_de_bolsa = float(input('Ingresa el peso de la bolsa: '))

if precio_kilo <= 0:
    print("El precio debe ser mayor a 0")
elif peso_de_bolsa <= 0:
    print("El peso debe ser mayor a 0")
else:
    precio_total = precio_kilo * peso_de_bolsa

print("Total a pagar es: ", precio_total)

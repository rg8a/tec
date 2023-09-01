#Equipo: Ricardo Ochoa y Emiliano Enríquez
precio_producto = float(input("Ingrese el precio del producto: "))
cantidad_comprar = int(input("Ingrese la cantidad a comprar: "))


#Cambiar el "and" por "or"
#Agregarle el signo "=" a la validación
if precio_producto <= 0 or cantidad_comprar <= 0:
    print("Los valores ingresados deben ser positivos y diferentes de cero.")
else:
    if cantidad_comprar <= 6:
        precio_final = precio_producto * cantidad_comprar
        #Agregarle el signo "=" a la validación 
    elif cantidad_comprar <= 20:
        descuento = 0.10
        precio_final = precio_producto * cantidad_comprar * (1 - descuento)
        #Agregarle el signo "=" a la validación
    elif cantidad_comprar <= 50:
        #Cambiar el valor del descuento a 15
        descuento = 0.15
        #Escribir "descuento" en vez de "descueto"
        precio_final = precio_producto * cantidad_comprar * (1 - descuento)
    else:
        #Meter variable "descuento en el "else"
        descuento = 0.20
        precio_final = precio_producto * cantidad_comprar * (1 - descuento)
    #Meter el print en el primer "else"
    print(f"El precio final a pagar es: {precio_final:.2f}")

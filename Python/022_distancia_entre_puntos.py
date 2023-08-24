import math

punto_init_x = input('Punto Inicial X:') 
punto_init_y = input('Punto Inicial Y:') 
punto_final_x = input('Punto Final X:') 
punto_final_y = input('Punto Final Y:') 

try:
    punto_init_x = int(punto_init_x)
    punto_init_y = int(punto_init_y)
    punto_final_x = int(punto_final_x)
    punto_final_y = int(punto_final_y)

    x = pow((punto_final_x - punto_init_x),2)
    y = pow((punto_final_y - punto_init_y),2)
    resultado_xy = float(math.sqrt((x+y)))
    print (f"distancia = {resultado_xy: 0.3}")

except ValueError:
    print("Debes de Introducir números enteros")

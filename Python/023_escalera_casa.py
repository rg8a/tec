import math

altura = input('Altura:') 
angulo_grados = input('Grados:') 

try:
    # largo=altura/seno(ángulo)
    if float(altura) > 0:
        altura = int(altura)
        angulo_grados = int(angulo_grados)
        angulo_grados_rad = math.radians(angulo_grados)
        sin = round(math.sin(angulo_grados_rad), 2)
        largo = math.ceil(altura/sin)
        print ("largo = ", largo)
    else:
        print("Debes de Introducir números enteros")

except ValueError:
    print("Debes de Introducir números enteros")

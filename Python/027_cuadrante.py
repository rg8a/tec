
numero = input('Número:')

try:
   numero = int(numero)
   
   if (numero == 0) or (numero == 90) or (numero == 180) or (numero == 270) or (numero == 360):
        print ("eje")
   elif (numero < 0) or (numero > 360):
        print ("excede")
   elif (numero >= 1) and (numero < 90):
        print ("cuadrante 1")
   elif (numero >= 91) and (numero < 180):
        print ("cuadrante 2")
   elif (numero >= 181) and (numero < 270):
        print ("cuadrante 3")
   elif (numero >= 271) and (numero < 360):
        print ("cuadrante 4")
   else:
        print ("excede")
except ValueError:
    print("Debes de Introducir números enteros")

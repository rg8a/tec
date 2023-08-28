import math

diametro = input('Diametro:') 
altura = input('Altura:') 

try:
   diametro = float(diametro)
   altura = float(altura)
   radio = diametro/2
   volumen = (math.pi * pow(radio,2))*altura

   print (f"La cantitdad de agua es:,{volumen: 0.4}, m3")

except ValueError:
    print("Debes de Introducir números enteros")

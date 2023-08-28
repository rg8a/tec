numero = input('Ingresa un numero:') 

try:
    numero = float(numero)
    par = numero%2
   
    if par == 0:
      print ("El número es par")
    else:
        print ("El número es impar")

except ValueError:
    print("Debes de Introducir un número")

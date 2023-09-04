print("1. Convertir de Fahrenheit a Celsius")
print("2. Convertir de Celsius a Fahrenheit")
choice = int(input("Seleccione una opción (1/2): "))

def convertir(tipo, temperatura):
   if tipo == 1:
      return (temperatura - 32) * 5/9
   else:
      return temperatura * 9/5 + 32

if choice == 1:
   f_temp = float(input("Ingrese la temperatura en grados Fahrenheit: "))
   respuesta = convertir(choice, f_temp)        
   print(f"{f_temp} grados Fahrenheit equivale a {respuesta:.2f} grados Celsius")
elif choice == 2:
   c_temp = float(input("Ingrese la temperatura en grados Celsius: "))
   respuesta = convertir(choice, c_temp)     
   print(f"{c_temp} grados Celsius equivale a {respuesta:.2f} grados Fahrenheit")
else:
   print("Opción no válida. Por favor, seleccione 1 o 2.")


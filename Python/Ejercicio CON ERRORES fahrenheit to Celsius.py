#Equipo: Ricardo Ochoa y Emiliano Enríquez
print("1. Convertir de Fahrenheit a Celsius")
print("2. Convertir de Celsius a Fahrenheit")
choice = int(input("Seleccione una opción (1/2): "))

if choice == 1:
    #Agregar float
   f_temp = float(input("Ingrese la temperatura en grados Fahrenheit: "))
   #Cambiar variable "farenheit" a "f_temp"
   #Agregar parentesis por la jeraquía de operaciones en la fórmula
   c_temp = (f_temp - 32) * 5/9
   print(f"{f_temp} grados Fahrenheit equivale a {c_temp:.2f} grados Celsius")
elif choice == 2:
   c_temp = float(input("Ingrese la temperatura en grados Celsius: "))
   f_temp = c_temp * 9/5 + 32
   #Agregar "f" para imprimir las variables y texto
   print(f"{c_temp} grados Celsius equivale a {f_temp:.2f} grados Fahrenheit")
else:
   print("Opción no válida. Por favor, seleccione 1 o 2.")


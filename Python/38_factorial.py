
# Ricardo Gaspar Ochoa
# A00838841

try:
    numero = int(input("\nIngresa un número entero: "))
    factorial = 1
    for i in range(1, numero + 1):
        factorial *= i
    print(f"El factorial de {numero} es {factorial}\n")
except ValueError:
    input('Debe ser un entero \n')

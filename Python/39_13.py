
# Ricardo Gaspar Ochoa
# A00838841

print('\n')
a = input('Rango 1: ') 
b = input('Rango 2: ')

try:
    a = int(a)
    b = int(b)
    if a >= b:
       print("Rango 1 debe ser menor al segundo\n")
    for i in range(a,b,5):
        print(i)
    print("\n")
except ValueError:
    print("Debes de introducir números enteros")

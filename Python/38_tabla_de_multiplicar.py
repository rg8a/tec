
# Ricardo Gaspar Ochoa
# A00838841

num = input('Introduce un número:')

try:
    num = int(num)
    for i in range(1,11): 
        lista = i * num
        print(i,'x',num,':', lista,'')
    print('\n')

except ValueError:
    print("Debes de introducir un número entero\n")


# Ricardo Gaspar Ochoa
# A00838841
try:
    print('\n')
    def fibonacci(n):
        lista = [0, 1]
        if n == 0:
            return []
        while len(lista) < n:
            numero = lista[-1] + lista[-2]
            lista.append(numero)
        return lista
        
    n = int(input("Ingrese número: "))
    if n >= 0:
        print(fibonacci(n))
        print('\n')
    else:
        print("Valor mayor o igual a 0.\n")
        
except ValueError:
    print("Debes de introducir números enteros\n")
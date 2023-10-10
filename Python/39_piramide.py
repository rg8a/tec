
# Ricardo Gaspar Ochoa
# A00838841

try:
    def letras(num):
        for i in range (1,num+1):
            items=""
            for j in range (1,i+1):
                if (i == 1):
                    items = items + " T"
                elif (i == 2):
                    items = items + " E"
                elif (i == 3):
                    items = items + " C"
                elif (i == 4):
                    items = items + " M"
                elif (i == 5):
                    items = items + " T"
                elif (i == 6):
                    items = items + " Y"
                else:
                    items = items + " x"
            print(items.center(50))
        print('\n')
    
    n = int(input ("\nIngresenúmero de niveles: "))
    if (n>=1 and n<=26):
        letras(n)
    else:
        print ("Debe ser un número entre 1 y 26\n")
    
except ValueError:
     print('Debe ser un número entre 1 y 26\n')

    
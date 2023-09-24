# Ricardo Gaspar Ochoa
# A00838841
# ¿Cómo funciona while?


################# Código 1 #####################

# Se declara la variable
spam = 0
# Se declara el while con la condición variable menor a 5
while spam < 5:
    # Se imprime un mensaje string
    print('Hello World')
    # Se suma un 1 al valor de la variable para ir iterando
    spam = spam + 1

################# Código 2 #####################

# Se declara la variable
name = ''
# Se declara el while con la condición si el nombre es distinto
# a 'your name'
while name != 'your name':
    # Se imprime un mensaje string sabiendo que no es 'your name' 
    print('Please type your name')
    # Se cambia el nombre de la variable para escribir el nuevo nombre
    name = input()
# Se imprime 'Thanks You' si el valor de name es: 'your name' 
print('Thanks You')

################# Código 3 #####################

# Se declara la variable
name = ''
# Se declara el while con condición true, entrnado en un bucle
while True:
    # Se imprime un mensaje string sabiendo que no es 'your name' 
    print('Please type your name')
    # Se cambia el nombre de la variable para escribir el nuevo nombre
    name = input()
    # Una condición if para validar el valor de name y controlar el loop
    if name == 'your name':
        # Se corta el el loop ya que es True la condición del if
        break 
# Se imprime 'Thanks You' ya que el valor de name es: 'your name'
# Y se salió del loop
print('Thanks You')

################# Código 4 #####################

# Se declara la variable
spam = 0
# Se declara el while con la condición variable menor a 5
while spam < 5:
    # Se suma un 1 al valor de la variable para ir iterando
    spam = spam + 1
    # Se hace una condición con if, si el valor de spam == 3
    # Entra al if y se regresa al inicio del while
    if spam == 3: 
        continue
    # Se imprime un mensaje con el valor de spam
    print('Spam is ' + str(spam))
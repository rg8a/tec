
tirada = input('Tiradas de Ana y Juan:')

ana, juan = tirada[0], tirada[1]
piedra = 'a'
papel = 'p'
tijera = 't'

if len(tirada) != 2:
    print('Las tiradas deben ser un caracter')
elif ana != piedra:
    print('Tirada incorrecta')
else:
    if ana == juan:
        print('Empate')
    elif ana == piedra and juan == tijera:
        print('Gana Ana')
    elif ana == papel and juan == piedra:
        print('Gana Ana')
    elif ana == tijera and juan == papel:
        print('Gana Ana')
    else:
        print('Gana Juan')



# ap j
# pa a
# at a
# ta j
# tp a
# pt j
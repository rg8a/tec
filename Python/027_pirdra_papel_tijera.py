
ana = input('Tiradas de Ana:')
juan = input('Tiradas de Juan:')

piedra = 'a'
papel = 'p'
tijera = 't'

if len(ana) > 1 and len(juan) > 1:
    print('Las tiradas deben ser un caracter')
else:
    if ana == piedra or papel or tijera and juan == piedra or papel or tijera:
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
    else:
        print('Tirada incorrecta')
    
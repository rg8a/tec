edad = float(input('¿Cuál es tu edad?'))
id_card = input('¿Traes tu identificación oficial?')

if id_card != 'si':
    print("No puedes pasar por tu licencia de conducir")
elif edad >= 18:
    print("Puedes pasar por tu licencia de conducir")
else:
    print("No puedes pasar por tu licencia de conducir")

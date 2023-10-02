
# Ricardo Gaspar Ochoa
# A00838841
try:
    estudiantes = int(input("Ingrese el número de estudiantes: "))
    respuestas = []
    for i in range(estudiantes):
        respuesta = input(f"¿Género musical favorito? (Pop / Rock / Hip Hop / Otro): ").lower()
        respuestas.append(respuesta)

    pop = 0
    rock = 0
    hiphop = 0
    otro = 0

    for respuesta in respuestas:
        if respuesta in respuesta == 'pop':
            pop += 1
        elif respuesta in respuesta == 'rock':
            rock += 1
        elif respuesta in respuesta == 'hip hop':
            hiphop += 1
        elif respuesta in respuesta == 'otro':
            otro += 1

    total_estudiantes = len(respuestas)
    porcentajePop = (pop / total_estudiantes) * 100
    porcentajeRock = (rock / total_estudiantes) * 100
    porcentajeHipHop = (hiphop / total_estudiantes) * 100
    porcentajeOtro = (otro / total_estudiantes) * 100

    print("\n")
    print(f"Pop: {porcentajePop:.2f}%")
    print(f"Rock: {porcentajeRock:.2f}%")
    print(f"Hip Hop: {porcentajeHipHop:.2f}%")
    print(f"Otro: {porcentajeOtro:.2f}%\n")
except ValueError:
    print('Debes introcucir datos correctos')
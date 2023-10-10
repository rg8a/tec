
# Ricardo Gaspar Ochoa
# A00838841

import random

# Lista de palabras para el juego
palabras = ['python', 'programacion', 'computadora',
            'juego', 'desarrollo', 'inteligencia', 'artificial']
humano = ["  +---+\n  |   |\n      |\n      |\n      |\n      |\n=========",

          "  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n=========",

          "  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n=========",

          "  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n=========",

          "  +---+\n  |   |\n  O   |\n /|\  |\n      |\n      |\n=========",

          "  +---+\n  |   |\n  O   |\n /|\  |\n /    |\n      |\n=========",

          "  +---+\n  |   |\n  O   |\n /|\  |\n / \  |\n      |\n========="]

# Función para elegir una palabra al azar
def elegir_palabra():
    return random.choice(palabras)

# Función para inicializar el tablero con guiones bajos
def inicializar_tablero(palabra):
    return ['_'] * len(palabra)

# Función para mostrar el tablero actual
def mostrar_tablero(tablero):
    print(' '.join(tablero))

# Función para adivinar una letra y actualizar el tablero
def adivinar_letra(palabra, tablero, letra):
    aciertos = 0
    for i in range(len(palabra)):
        if palabra[i] == letra:
            tablero[i] = letra
            aciertos += 1
    return aciertos

# Función principal del juego
def ahorcado():
    palabra = elegir_palabra()
    tablero = inicializar_tablero(palabra)
    intentos = 7  # Número de intentos permitidos
    letras_adivinadas = []

    print("¡Bienvenido al juego del ahorcado!")
    print(humano[6])
    print('\n')

    while intentos > 0:
        print(f'Intentos restantes: {intentos}')
        mostrar_tablero(tablero)
        letra = input("\nAdivina una letra: ").lower()

        if len(letra) != 1 or not letra.isalpha():
            print("Por favor, ingresa una letra válida.\n")
            continue

        if letra in letras_adivinadas:
            print("Ya has adivinado esa letra antes.\n")
            continue

        letras_adivinadas.append(letra)
        aciertos = adivinar_letra(palabra, tablero, letra)

        if aciertos == 0:
            intentos -= 1
            print("¡Incorrecto! Intenta de nuevo.\n")
        else:
            print("¡Correcto!\n")

        if '_' not in tablero:
            print("¡Felicidades! Has adivinado la palabra:", palabra, '\n')
            break

    if '_' in tablero:
        print("¡Has agotado tus intentos! La palabra era:", palabra, '\n')


# Función que inicia el juego
ahorcado()

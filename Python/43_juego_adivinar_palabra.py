# Ricardo Gaspar Ochoa
# A00838841

#Este juego se trata de adivinar la palabra seleccionada al azar, 
#tomé de base 3 temas principales, como lenguajes de programación, nombre de científicos 
# o elementos químicos, para tener una lista de diferentes opciones.
# Se  pide al usuario que escriba letra por letra o la palabra completa para ganar.
# Si no adivina en 7 turnos, perderá, al final se da la opción de seguir jugando.


# Librería para seleccionar random
import random

# Lista de palabras para el juego
matriz_palabras = [
    [["JavaScript", "Java", "Ruby"],
    ["C++", "Swift", "Go"],
    ["PHP", "Rust", "TypeScript"],
    ["Kotlin", ".Net", "C#"]],

    [["Hidrógeno", "Litio", "Boro"],
    ["Carbono", "Nitrógeno", "Flúor"],
    ["Magnesio", "Fósforo", "Argón"],
    ["Calcio", "Cromo", "Níquel"]],

    [["Ada Lovelace", "Stephen Hawking", "Neil Armstrong"],
    ["Rosalind Franklin", "Isaac Newton", "Grace Hopper"],
    ["John Bardeen", "Hedy Lamarr", "Niels Bohr"],
    ["Richard Feynman", "Werner Heisenberg", "Enrico Fermi"]],
]

# Código ascii para diagrama del monito
monito = ["  +---+\n  |   |\n  O   |\n /|\  |\n / \  |\n      |\n=========",
          "  +---+\n  |   |\n  O   |\n /|\  |\n /    |\n      |\n=========",
          "  +---+\n  |   |\n  O   |\n /|\  |\n      |\n      |\n=========",
          "  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n=========",
          "  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n=========",
          "  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n=========",
          "  +---+\n  |   |\n      |\n      |\n      |\n      |\n=========",]

# Función para elegir una palabra al azar
def elegir_palabra(num):
        if num == 1:
            return random.choice(random.choice(matriz_palabras[0])).upper()
        elif num == 2:
            return random.choice(random.choice(matriz_palabras[1])).upper()
        elif num == 3:
            return random.choice(random.choice(matriz_palabras[2])).upper()
        else:
            return print('Debes elegir de esas opciones \n')
        

# Función para crear espacios con guiones bajos
def crear_lineas(palabra):
    return ['_'] * len(palabra)

# Función para mostrar las líneas
def mostrar_tablero(tablero):
    print(' '.join(tablero))

# Esta función es para recorrer la palabra y comparar si la lera está ahí
def adivinar_letra(palabra, tablero, letra):
    aciertos = True
    for i in range(len(palabra)):
        if palabra[i] == letra:
            tablero[i] = letra
            aciertos = False
    return aciertos

# Función que inicia el juego
def iniciarJuego():
    try:
        print("\n")
        print("✨¡Bienvenido al juego del ahorcado!✨")
        print("¡Adivina la palabra!")
        print("Puedes escribir letra a letra o palabra completa.")
        num = input("Elije el num del tema: \n 1. Programación \n 2. Química \n 3. Científicos\n ")
        num = int(num)
        print(monito[6])
        print('\n')

        palabras = elegir_palabra(num)
        tablero = crear_lineas(palabras)
        # Este número coíncide con los turnos permitidos y el diagrama
        intentosPermitidos = 7  
        letras_adivinadas = []
        gano = False

        while intentosPermitidos > 0:
            print(f'Intentos restantes: {intentosPermitidos}')
            mostrar_tablero(tablero)
            letra = input("\nEscribe una letra o paplabra: ").upper()

            if len(letra) != 1 and letra == palabras:
                print("¡Felicidades! Has adivinado la palabra:", palabras, '\n')
                gano = True
                break

            if letra in letras_adivinadas:
                print("Ya has mostrado esa letra antes.\n")
                continue

            letras_adivinadas.append(letra)
            aciertos = adivinar_letra(palabras, tablero, letra)

            if aciertos:
                intentosPermitidos -= 1
                print(monito[intentosPermitidos])
                print("¡Incorrecto! Intenta de nuevo.\n")
            else:
                print("¡Correcto!\n")

            if '_' not in tablero:
                print("¡Felicidades! adivinaste la palabra:", palabras, '\n')
                break
            
    #Doy la opción de volver a jugar fuera del bucle
        if '_' in tablero and gano != True:
            print("¡Perdite 😪! La palabra era:", palabras, '\n')
        jugarDeNuevo = input("¿Aquires volver a jugar? Si o No\n").lower()
        if jugarDeNuevo == "si":
            iniciarJuego()
        else:
            print("Bueno. ¡Chao!\n")
    except ValueError:
        print('Introduce el número del tema')

# Esta función inicia el juego
iniciarJuego()

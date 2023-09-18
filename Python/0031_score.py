score = input('Ingresa un score entre 0 y 1: ') 

try:
    score = float(score)
    def calcula_grado(score):
        if score < 0 or score > 1:
            print('score incorrecto')
        elif score <= 0.6:
            print('F')
        elif score > 0.6 and score < 0.7 :
            print('D')
        elif score > 0.7 and score < 0.8:
            print('C')
        elif score > 0.8 and score < 0.9:
            print('B')
        elif score > 0.9 and score <= 1:
            print('A')
        else:
            print('score incorrecto')
        
    calcula_grado(score)

except ValueError:
    print("Debes de introducir un número con decimales entre 0 y 1")

# Ricardo Gaspar Ochoa
# A00838841
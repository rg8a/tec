peso = float(input('Introduce tu peso en kg: '))
estatura = float(input('Introduce tu estatura en m: '))

if peso <= 0 or estatura <= 0:
    print("Los valores deben de ser mayor a 0")
else:
    imc = peso/(estatura*estatura)

    if imc < 20:    
        print("Tu ídice de masa corporal es: ", round(imc,2), "PESO BAJO")
    elif 20 <= imc < 25:
        print("Tu ídice de masa corporal es: ", round(imc,2), "NORMAL")
    elif 25 <= imc < 30:
        print("Tu ídice de masa corporal es: ", round(imc,2), "SOBREPESO")
    elif 30 <= imc < 40:
        print("Tu ídice de masa corporal es: ", round(imc,2), "OBESIDAD")
    else:
        print("Tu ídice de masa corporal es: ", round(imc,2), "OBESIDAD MORBIDA")

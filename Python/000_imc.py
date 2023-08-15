peso = float(input('Introduce tu peso: '))
estatura = float(input('Introduce tu estatura: '))

if peso <= 0 or estatura <= 0:
    print("Los valores deben de ser mayor a 0")
else:
    estatura_final = estatura
    estatura_al_cuadrado = estatura_final*estatura_final
    imc = peso/estatura_al_cuadrado

print(f"Tu ídice de masa corporal es:, {imc: 0.3}")

# Ricardo Gaspar Ochoa
# A00838841


try:

    for i in range(5): 
        num = input('Introduce un número de alumno:')
        num = int(num)
        t1 = int(input('Tarea 1:'))
        t2 = int(input('Tarea 2:'))
        t3 = int(input('Tarea 3:'))
        tareas = t1 + t2 + t3
        for j in range(1): 
            promedio = (tareas)/ 3
            print(f'promedio: {promedio:.1f}')
            print('\n')

except ValueError:
    print("Debes de introducir un número entero\n")
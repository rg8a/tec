
# Ricardo Gaspar Ochoa
# A00838841
# Promedio Alumnos

try:
    total_alumnos = int(input("Total de alumnos: "))
    
    alumno = total_alumnos
    calificacion_grupal = []

    while alumno > 0:
        examen = float(input("Calificacion de examen: "))
        tareas = float(input("Calificacion de tareas: "))
        proyecto = float(input("Calificacion del proyecto final: "))
        
        promedo_examen = examen * 0.3
        promedio_tareas = tareas * 0.5
        promedio_proyecto = proyecto * 0.2
        calificacion_final = promedio_proyecto + promedio_tareas + promedo_examen

        print ('Su calificacion final es de: ', calificacion_final , '\n')
        calificacion_grupal.append(calificacion_final)
        alumno -= 1

    suma_de_promedios_alumnos = sum(calificacion_grupal)
    promedio_general = suma_de_promedios_alumnos/total_alumnos
    print("Promedio del salon: ", promedio_general,'\n')

except ValueError:
    print("Debes de introducir números enteros \n")
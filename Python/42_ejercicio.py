

# Ricardo Gaspar Ochoa
# A00838841

data =[[],[],[]]

def tempMin(data):
    t_min= min(data[1])
    for i in range(len(data[0])):
        if data[1][i] == t_min:
            print("Día con menor temperatura fue ",data[0][i],'con: ', t_min)

def tempMax(data):
    t_max = max(data[2])
    for i in range(len(data[0])):
        if data[2][i] == t_max:
            print("Día con mayor temperatura fue ",data[0][i],'con: ', t_max)

try:
    for i in range(7):
        dia = input('Día: ')
        min_temp = int(input('Temperatura mínima: '))
        max_temp = int(input('Temperatura máxima: '))

        data[0].append(dia)
        data[1].append(min_temp)
        data[2].append(max_temp)

    tempMin(data)
    tempMax(data)
except ValueError:
     print("Debe ser un número entero")
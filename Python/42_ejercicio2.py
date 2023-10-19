

# Ricardo Gaspar Ochoa
# A00838841


data = [[],[]]

# def array1(data):
#     t_min= min(data[0])
#     for i in range(len(data[0])):
#         if data[1][i] == t_min:
#             print("Día con menor temperatura fue ",data[0][i],'con: ', t_min)

# def array2(data):
#     t_max = max(data[1])
#     for i in range(len(data[0])):
#         if data[2][i] == t_max:
#             print("Día con mayor temperatura fue ",data[0][i],'con: ', t_max)


try:
    for i in range(len(data)):
        for j in range(len(data[i])):
            dato = int(input('No.: '))
            data[i].append(dato)
    print(data)
except ValueError:
     print("Debe ser un número entero")

# a = [[1, 20, 3, 4], [2, 3,10,11], [8, 19, 20,5]]
# #imprimimos las 3 listas (cada renglon es una lista)
# for row in a:
#     print (row)
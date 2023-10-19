""" matrices bidimensionales
listas de listas """

#creamos una matriz de dimension 2x3, es decir 2 renglones por 3 columnas
a = [[1, 2, 3], [4, 5, 6]]
#imprimimos el primer renglón, observar se imprime una lista
print(a[0])
print(a[1])
#observa en la siguiente linea que b no es una nueva lista igual a la lista a[0]
#sino que b "apunta" a la misma direccion que a[0]
b = a[0]
print(b)
#para acceder a un elemento dentro de la matraiz
print(a[0][2])
a[0][1] = 7
print(a)
#observa que al modificar un elemento de a se actualiza el valor de b porque apuntan al
#mismo espacio en memoria donde esta guardada la lista
print(b)
#modificamos el valor de la lista b que apunta a[0]
b[2] = 9
#se modifica la original?
print(b)
print(a)

""" Iterar en una matriz con ciclo for"""
#recordemos iterar en una lista
print("iterar en lista")
a=[1,2,3]
for i in a:
    print (i)


a = [[1, 20, 3, 4], [2, 3,10,11], [8, 19, 20,5]]
#imprimimos las 3 listas (cada renglon es una lista)
for row in a:
    print (row)
        
#extraemos uno por uno los elementos de la lista, para cada renglon
#se recorren los elementos (columnas)
for row in a:
    for elem in row:
        print(elem, end=' ')
    print()
    
    
#para leer los elementos de una matriz uno a uno
    
matriz =[]
un_renglon=[]

for j in range(3):
    un_renglon.append(input("valor "))
matriz.append(un_renglon)
print(matriz)
#agregamos otro renglon... y as
matriz.append(un_renglon)
print(matriz)

#en vez de agregar un renglon a la vez hacemos for anidado
nRows =3
nCols =4
matriz =[]
for r in range(nRows):
    unRenglon =[]
    for c in range(nCols):
        print ("dame el valor de renglon ",r+1, "columna ", c+1,end= " ")
        valor = input()
        unRenglon.append(valor)
    matriz.append(unRenglon)

print(matriz)
    


#Ejercicio en una  matriz se tiene en primer renglon
#nombre de los dias, segundo renglon, temperatura mas baja en ese dia
#en tercer renglon temperatura mas alta en ese dia
#haz un programa que lea los valores de temperatura m[as baja de cada dia
#y mas alta de cada dia
#luego haz una funcion que reciba la matriz y regrese el dia con la
#temperatura mas baja
#haz otra funcion que reciba la matriz y regrese el dia con la temperatura
#mas alta
#RETO las funciones regresen una lista que tenga el nombre del dia
#y el valor de la temperatura (alta o baja)
    
temp = [["lunes", "martes", "miercoles"],[20,23,30],[28,27,40]]

#cual fue el dia con menor temperatura? y cual con la mayor

t_min= min(temp[1])
t_max = max(temp[2])


for i in range(3):
    if temp[1][i]==t_min:
        print("el dia con menor temperatura fue ",temp[0][i])
    if temp[2][i]==t_max:
        print("el dia con mayor temperatura fue ",temp[0][i])
        

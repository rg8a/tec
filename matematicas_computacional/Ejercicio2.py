

# Importar numpy
import numpy as np
# Resolver sistema de ecuaciones de 3 incógnitas por el método de la matriz inversa
# Ax=B
# x=Inv(A)*B

# Crear la matriz A de coeficientes de las variables dependientes del sistema de ecuaciones.
A = np.array([[8, 2, -2],
              [10, 2, 4],
              [12, 2, 2]])

# Crear el vector B de términos independientes del sistema
b = np.array([-2, 4, 6])

# Calcular la matriz inversa de A
A_inv = np.linalg.inv(A)

# Multiplicar la matriz inversa de A por el vector b para obtener el
# vector solución del Sistema de Ecuaciones.
x = np.dot(A_inv, b)

# Mostrar el vector solución
print(x)
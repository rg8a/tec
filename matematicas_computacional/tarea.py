# Importar numpy
import numpy as np
# Resolver sistema de ecuaciones de 3 incógnitas por el método de la matriz inversa
# Ax=B
# x=Inv(A)*B

# Crear la matriz A de coeficientes de las variables dependientes del sistema de ecuaciones.
A = np.array([[5, -3, -1],
              [1, 4, -6],
              [2, 3, 4]])

# Crear el vector B de términos independientes del sistema
b = np.array([1, -1, 9])

# Calcular la matriz inversa de A
A_inv = np.linalg.inv(A)

# Multiplicar la matriz inversa de A por el vector b para obtener el
# vector solución del Sistema de Ecuaciones.
x = np.dot(A_inv, b)

# Mostrar el vector solución
print(x)
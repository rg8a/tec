
lado_a = input('Introduce el valor del lado a:') 
lado_b = input('Introduce el valor del lado b:') 
lado_c = input('Introduce el valor del lado c:') 

try:
   lado_a = float(lado_a)
   lado_b = float(lado_b)
   lado_c = float(lado_c)

   valido = (lado_a + lado_b > lado_c) and (lado_b + lado_c > lado_a) and (lado_a + lado_c > lado_b)
   
   if (lado_a == lado_b) and (lado_c == lado_a):
        print ("Es un triangulo equilátero")
   elif valido and lado_c != lado_a and lado_c != lado_b and lado_a != lado_b:
        print ("Es un triangulo escaleno")
   elif valido and (lado_b + lado_a > lado_c):
        print ("Es un triangulo Isóseles")
   else:
        print ("No es un tríangulo")
except ValueError:
    print("Debes de Introducir números enteros")

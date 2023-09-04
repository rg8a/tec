# base = input('Ingresa base:') 
# altura = input('Ingresa altura:') 
radio = input('Ingresa radio:') 
alturaCilindro = input('Ingresa altura del cilindro:') 

try:
    # base = float(base)
    # altura = float(altura)
    alturaCilindro = float(alturaCilindro)
    radio = float(radio)
    # def areaRectangulos(base, altura):
    #     return (base * altura)
    
    def areaCirculo(radio):
        calculo = 3.14 * (radio * radio)
        return calculo
    
    def areaCilindro(radio, alturaCilindro):
        area =  areaCirculo(radio)
        calculo =  area * alturaCilindro
        return calculo

except ValueError:
    print("Debes de Introducir números")


print (areaCilindro(radio, alturaCilindro), 'cm3')
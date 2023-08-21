numero_cajas_tazas = int(input('¿Cuántas cajas de tazas hay?: '))
numero_tazas_por_caja = int(input('¿Cuántas tazas hay por caja?: '))
numero_cajas_de_lapices = int(input('¿Cuántas cajas de lápices hay?: '))
numero_lapices_por_caja = int(input('¿Cuántas lápices hay por caja?: '))

tazas_totales = numero_cajas_tazas * numero_tazas_por_caja
lapices_totales = numero_cajas_de_lapices * numero_lapices_por_caja

bolsas_por_lapices = int(lapices_totales/3)
lapices_sobran = int(lapices_totales%3)
lapices_sobran_por_taza = int((bolsas_por_lapices-tazas_totales)*3)

tazas_sobran = int(tazas_totales-bolsas_por_lapices)


if bolsas_por_lapices <= tazas_totales:
    print("número máx de invitados:", bolsas_por_lapices)
    if lapices_sobran == 1:
        print("Sobró:", lapices_sobran," lápiz")
        print("y:", tazas_sobran," tazas")
    else:    
        print("Sobró:", lapices_sobran," lápices")
        print("y:", tazas_sobran," tazas")
else:
    print("número máx de invitados:", tazas_totales)
    if lapices_sobran == 1:
        print("Sobró:", lapices_sobran_por_taza," lápiz")
    else:    
        print("Sobró:", lapices_sobran_por_taza," lápices")

    

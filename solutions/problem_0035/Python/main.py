#--------------------------------------#
#--- Elaborado por: Janaina Abib    ---#
#--- Data: 24/03/2024               ---#
#--------------------------------------#

def principal( ):
    saco = float(input("Informe o peso do saco de ração em quilos: "))
    saco = (saco * 1000)

    gato1 = float(input("Informe a quantidade fornecida ao gato 1 por dia, em gramas: "))
    gato2 = float(input("Informe a quantidade fornecida ao gato 2 por dia, em gramas: "))

    consumo = (gato1 + gato2) * 5
    restante = (saco - consumo)
    print("Após 5 dias restará no saco de ração {:.2f} gramas".format(restante))    
#-----------------------------------FIM---------------------------------
principal( )


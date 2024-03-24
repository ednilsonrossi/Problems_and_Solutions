
#--------------------------------------#
#--- Elaborado por: Janaina Abib    ---#
#--- Data: 24/03/2024               ---#
#--------------------------------------#

def principal( ):
    
    validos = int(input("Informe o total de votos válidos: "))
    brancos = int(input("Informe o total de votos em branco: "))
    nulos = int(input("Informe o total de votos nulos: "))

    total = validos + brancos + nulos
    print("Total de eleitores: ", total)

    percentual = (validos/total) * 100
    print("Percentual de votos VÁLIDOS = {:.2f} % ".format(percentual))

    percentual = (brancos/total) * 100
    print("Percentual de votos BRANCOS = {:.2f} % ".format(percentual))

    percentual = (nulos/total) * 100
    print("Percentual de votos NULOS = {:.2f} % ".format(percentual))
#-----------------------------------FIM---------------------------------
principal( )

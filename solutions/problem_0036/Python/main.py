
#--------------------------------------#
#--- Elaborado por: Janaina Abib    ---#
#--- Data: 24/03/2024               ---#
#--------------------------------------#

def principal( ):
    
    odoI = float(input("Valor do odômetro no início do dia: "))
    odoF = float(input("Valor do odômetro no final do dia: "))
    combustivel = float(input("Quantidade de litros de combustível consumida: "))
    totalRecebido = float(input("Valor total recebido em reais: R$"))

    kmPercorrido = (odoF - odoI)
    mediaC = (combustivel / kmPercorrido)
    print("A média do consumo do dia foi de {:.2f} KM/LITRO".format(mediaC))

    lucro = totalRecebido - (combustivel * 3.82) 
    print("O lucro do dia foi de R${:.2f}".format(lucro))
#-----------------------------------FIM---------------------------------
principal( )


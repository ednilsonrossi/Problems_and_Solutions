
#--------------------------------------#
#--- Elaborado por: Janaina Abib    ---#
#--- Data: 24/03/2024               ---#
#--------------------------------------#

def principal( ):
    
    anoAtual = int(input("Informe o ano atual: "))
    anoNascimento = int(input("Informe o ano em que nasceu: "))

    idadeAtual = (anoAtual - anoNascimento)
    idade52 = (2052 - anoNascimento)
    print("Em {} você faz (ou fará) {} anos". format(anoAtual, idadeAtual))
    print("No ano de 2052 você fará {} anos". format(idade52))
#-----------------------------------FIM---------------------------------
principal( )

#--------------------------------------#
#--- Elaborado por: Janaina Abib    ---#
#--- Data: 24/03/2024               ---#
#--------------------------------------#

def principal( ):
    conta = float(input("Informe o valor da conta: R$"))
    carlos = conta // 3
    andre = carlos
    felipe = conta - (carlos + andre)
    print("Carlos pagará R${:.2f}, André pagará R${:.2f} e Felipe pagará R${:.2f}".format(carlos, andre, felipe)) 
#-----------------------------------FIM---------------------------------
principal( )


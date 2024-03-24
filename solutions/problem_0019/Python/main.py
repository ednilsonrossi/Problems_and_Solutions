#--------------------------------------#
#--- Elaborado por: Janaina Abib    ---#
#--- Data: 24/03/2024               ---#
#--------------------------------------#

def principal( ):
    
    valor_lido = float(input("Digite o valor: "))
    
    valor = valor_lido
    
    valor_nota = 100
    qtdade_notas = valor // valor_nota
    valor = valor % valor_nota
    print("Notas de R${:.2f}: {} nota(s)".format(valor_nota, qtdade_notas))

    valor_nota = 50
    qtdade_notas = valor // valor_nota
    valor = valor % valor_nota
    print("Notas de R${:.2f}: {} nota(s)".format(valor_nota, qtdade_notas))

    valor_nota = 10
    qtdade_notas = valor // valor_nota
    valor = valor % valor_nota
    print("Notas de R${:.2f}: {} nota(s)".format(valor_nota, qtdade_notas))

    valor_nota = 5
    qtdade_notas = valor // valor_nota
    valor = valor % valor_nota
    print("Notas de R${:.2f}: {} nota(s)".format(valor_nota, qtdade_notas))

    valor_nota = 1
    qtdade_notas = valor // valor_nota
    valor = valor % valor_nota
    print("Notas de R${:.2f}: {} nota(s)".format(valor_nota, qtdade_notas))
#-----------------------------------FIM---------------------------------
principal( )

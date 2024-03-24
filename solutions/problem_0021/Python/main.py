#--------------------------------------#
#--- Elaborado por: Janaina Abib    ---#
#--- Data: 24/03/2024               ---#
#--------------------------------------#

def principal( ):
    diaria = float(input("Valor da diária: "))

    diaria_promocional = diaria * 0.78;
    print("DIARIA PROMOCIONAL..: R${:.2f}".format(diaria_promocional))
    
    lotacao = 40;
    renda_normal = (42 * lotacao / 100) * diaria * 8
    print("RENDA SEM PROMOÇÃO..: R${:.2f}".format(renda_normal))

    lotacao = 70;
    renda_promocao = (42 * lotacao / 100) * diaria_promocional * 8
    print("RENDA COM PROMOÇÃO..: R${:.2f}".format(renda_promocao))
    
    lucro = (renda_promocao - renda_normal)
    print("LUCRO COM A PROMOÇÃO: R${:.2f}".format(lucro))
    
#-----------------------------------FIM---------------------------------
principal( )



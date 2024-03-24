#--- Elaborado por: Janaina Abib    ---#
#--- Data: 24/03/2024               ---#
#--------------------------------------#

def principal( ):
    tempo = float(input("Informe a quantidade de horas que a viagem durou: "))
    velMedia = float(input("Informe a velocidade média durante a viagem: "))

    distancia = (tempo * velMedia)
    litros = (distancia / 12)
    print("A velocidade média foi de {:.2f}".format(velMedia))
    print("O tempo gasto na viagem foi de {:.2f} horas".format(tempo))
    print("A distância total percorrida foi de {:.2f}KM".format(distancia))
    print("Foram gastos durante a viagem {:.2f} litros de combustível".format(litros))
#-----------------------------------FIM---------------------------------
principal( )


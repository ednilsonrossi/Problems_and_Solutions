#include "carro_lib.h"



int faixa_excesso(TCarro oCarro, double limite){
    int retorno;
    if (!esta_acima_do_limite(oCarro, limite) ){
        retorno = -1;
    } else {
        double lim_mais_20 = limite * 1.2;
        if (!esta_acima_do_limite(oCarro, lim_mais_20)){
        //if (velocidade_considerada(oCarro) <= lim_mais_20){
            retorno = 0;
        } else {
            retorno = 1;
        }
    }
    return retorno;
}

bool esta_acima_do_limite(TCarro oCarro, double limite){
    return velocidade_considerada(oCarro) > limite;
}

double velocidade_considerada(TCarro oCarro){
    return oCarro.velocidade_aferida * 0.93;
}

TCarro ler_carro(){
    struct carro oCarro;
    printf("Placa (somente números)...: ");
    scanf("%d", &oCarro.placa);
    __fpurge(stdin);
    printf("Velocidade aferida (km/h).: ");
    scanf("%lf", &oCarro.velocidade_aferida);
    __fpurge(stdin);
    return oCarro;
}

void imprime_carro(TCarro oCarro){
    printf("> Placa: %4d | %6.2lf km/h | %6.2lf km/h", 
            oCarro.placa, 
            oCarro.velocidade_aferida,
            velocidade_considerada(oCarro) );
}
/**
 * Elaborado por: Ednilson Rossi
 * Data.........: 24/03/2024
 * 
 * Solução iniciante, sem utilização de funções matemáticas. Objetivo de introdução à
 * programmação em linguagem C.
 * 
 * Utiliza-se apenas o tipo inteiro para pratica do raciocínio lógico.
*/

#include <stdio.h>

int main()
{
    int tempo, vel_media, distancia, consumo;

    printf("Tempo da viagem (em horas): \n");
    scanf("%d", &tempo);

    printf("Velocidade média (em km/h): \n");
    scanf("%d", &vel_media);

    distancia = vel_media * tempo;

    consumo = distancia / 12;

    printf("Velocidade média: %d km/h \n", vel_media);
    printf("Tempo de viagem: %d horas \n", tempo);
    printf("Distância percorrida: %d km \n", distancia);
    printf("Consumo de combustível: %d litros \n", consumo);
    
    return 0;
}

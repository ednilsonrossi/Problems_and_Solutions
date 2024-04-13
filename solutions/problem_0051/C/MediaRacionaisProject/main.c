/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include "racional.h"

int main(){
    Racional_Type rac, soma, media;
    int qtd, opcao;
    soma = criarRacional(0,1);
    qtd = 0;

    do{
        printf("Digite Racional <numerador> <enter> <denominador>\n");
        rac = scanRacional();
        soma = somaRacional(soma, rac);
        destruirRacional(rac);
        qtd++;

        printf("Para leitura? (Sim = 1 / Não = 0): ");
        scanf("%d", &opcao);
    }while(opcao == 0);

    if(qtd != 0){
        rac = criarRacional(1, qtd);
        media = multiplicaRacional(soma, rac);
        printf("Média: ");
        printRacional(media);
        printf("\n");
    }

    destruirRacional(rac);
    destruirRacional(soma);
    destruirRacional(media);
    return 0;
}
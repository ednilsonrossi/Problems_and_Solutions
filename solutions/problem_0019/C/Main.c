#include <stdio.h>

int main(){
    
    int valor_lido;
    int valor, qtdade_notas, valor_nota;

    printf("Digite o valor: \n");
    scanf("%d", &valor_lido);

    valor = valor_lido;
    
    valor_nota = 100;
    qtdade_notas = valor / valor_nota;
    valor = valor % valor_nota;
    printf("Notas de R$ %4d.00: %3d notas\n", valor_nota, qtdade_notas);

    valor_nota = 50;
    qtdade_notas = valor / valor_nota;
    valor = valor % valor_nota;
    printf("Notas de R$ %4d.00: %3d notas\n", valor_nota, qtdade_notas);

    valor_nota = 10;
    qtdade_notas = valor / valor_nota;
    valor = valor % valor_nota;
    printf("Notas de R$ %4d.00: %3d notas\n", valor_nota, qtdade_notas);

    valor_nota = 5;
    qtdade_notas = valor / valor_nota;
    valor = valor % valor_nota;
    printf("Notas de R$ %4d.00: %3d notas\n", valor_nota, qtdade_notas);

    valor_nota = 1;
    qtdade_notas = valor / valor_nota;
    valor = valor % valor_nota;
    printf("Notas de R$ %4d.00: %3d notas\n", valor_nota, qtdade_notas);

    return 0;
}

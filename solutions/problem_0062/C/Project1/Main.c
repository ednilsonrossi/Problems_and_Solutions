#include <stdio.h>

int main(int argc, char const *argv[]){
    float numero, soma, media;
    int contador;
    char continuar_leitura;

    soma = 0;
    contador = 0;
    continuar_leitura = 's';
    while (continuar_leitura == 's' || continuar_leitura == 'S'){
        printf("Digite nota: ");
        scanf("%f", &numero);

        soma = soma + numero;
        contador = contador + 1;

        printf("Continuar entrada de dados (S/N)? ");
        scanf(" %c", &continuar_leitura);
    }

    media = soma / contador;
    printf("Média da turma: %.2f\n\n", media);
    return 0;
}

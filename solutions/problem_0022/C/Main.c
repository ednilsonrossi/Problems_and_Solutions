#include <stdio.h>

int main(){
    
    int ingressos, porcentagem;
    float popular, geral, arquibancada, cadeiras, renda;
    float preco;

    printf("Informe quantidade de ingressos: ");
    scanf("%d", &ingressos);

    //ingresso popular
    preco = 1.0;
    porcentagem = 10;
    popular = (ingressos * porcentagem / 100) * preco;

    //ingresso geral
    preco = 5.0;
    porcentagem = 50;
    geral = (ingressos * porcentagem / 100) * preco;

    //ingresso arquibancada
    preco = 10.0;
    porcentagem = 30;
    arquibancada = (ingressos * porcentagem / 100) * preco;

    //ingresso cadeira
    preco = 2.0;
    porcentagem = 10;
    cadeiras = (ingressos * porcentagem / 100) * preco;

    renda = popular + geral + arquibancada + cadeiras;

    printf("RENDA DO JOGO: %.2f\n\n", renda);

    return 0;
}

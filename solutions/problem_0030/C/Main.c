#include <stdio.h>

float valor_total(int qtdade, float preco);
float valor_com_desconto(float valor_compra, int porcentagem_desconto);

int main(){
    int qtd_p, qtd_m, qtd_g;
    float valor_venda;

    printf("Informe quantidade de camisetas P, M e G: \n");
    scanf("%d%d%d", &qtd_p, &qtd_m, &qtd_g);

    valor_venda = valor_total(qtd_p, 10.0);
    valor_venda = valor_venda + valor_total(qtd_m, 12.0);
    valor_venda = valor_venda + valor_total(qtd_g, 15.0);

    printf("Valor da venda: %.2f\n", valor_venda);
    printf("Valor da venda com desconto: %.2f\n", valor_com_desconto(valor_venda, 25));

    return 0;
}

float valor_total(int qtdade, float preco){
    return qtdade * preco;
}

float valor_com_desconto(float valor_compra, int porcentagem_desconto){
    float porc = 1 - (porcentagem_desconto / 100.0);
    return valor_compra * porc;
}
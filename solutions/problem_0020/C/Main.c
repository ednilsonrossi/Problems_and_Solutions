#include <stdio.h>

int main(){
    
    float valor_compra, cotacao_dolar, porc_icms, porc_lucro;
    float lucro, icms, total_pagar;

    printf("Digite valor compra (em dolar): ");
    scanf("%f", &valor_compra);

    printf("Digite cotação dolar: ");
    scanf("%f", &cotacao_dolar);

    printf("Digite porcentagem ICMS: ");
    scanf("%f", &porc_icms);

    printf("Digite porcentagem de lucro: ");
    scanf("%f", &porc_lucro);

    //Converte o valor da compra para reais
    valor_compra = valor_compra * cotacao_dolar;

    //Calcular o lucro
    lucro = valor_compra * porc_lucro / 100;

    //Calcular ICMS
    icms = valor_compra * porc_icms / 100;

    //Calcular o total a pagar
    total_pagar = valor_compra + lucro + icms;

    printf("Total a pagar: R$ %.2f\n", total_pagar);

    return 0;
}

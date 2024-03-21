#include <stdio.h>

int main(){
    float taxa_fixa, taxa_por_km, desconto, total, valor_desconto;
    int num_dias, km_rodados;

    // Entrada de dados
    printf("Informe a taxa fixa por dia: ");
    scanf("%f", &taxa_fixa);

    printf("Informe a taxa por km rodado: ");
    scanf("%f", &taxa_por_km);

    printf("Informe o número de dias: ");
    scanf("%d", &num_dias);

    printf("Informe o número de quilômetros rodados: ");
    scanf("%d", &km_rodados);

    // Cálculo do valor do aluguel
    total = (taxa_fixa * num_dias) + (taxa_por_km * km_rodados);

    // Cálculo do desconto
    desconto = taxa_fixa * num_dias * 0.1;
    valor_desconto = total - desconto;

    // Saída de resultados
    printf("\nValor total do aluguel: R$ %.2f\n", total);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor a pagar: R$ %.2f\n", valor_desconto);
    printf("Número de dias: %d\n", num_dias);
    printf("Quilometragem rodada: %d km\n", km_rodados);
    
    return 0;
}

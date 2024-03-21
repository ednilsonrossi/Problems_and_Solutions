#include <stdio.h>

int main(){
    float potencia_refrigerador, tempo_ligado, valor_kwh, energia_gasta, valor_pago;

    // Entrada de dados
    printf("Informe a potência do refrigerador (em watts): ");
    scanf("%f", &potencia_refrigerador);

    printf("Informe o tempo que o refrigerador permaneceu ligado (em horas): ");
    scanf("%f", &tempo_ligado);

    printf("Informe o valor do quilowatt hora (em reais): ");
    scanf("%f", &valor_kwh);

    // Cálculo da energia total gasta pelo refrigerador
    energia_gasta = potencia_refrigerador * tempo_ligado / 1000; // Convertendo de watts para quilowatts

    // Cálculo do valor a ser pago à companhia de Energia Elétrica
    valor_pago = energia_gasta * valor_kwh;

    // Saída de resultados
    printf("\nEnergia total gasta pelo refrigerador: %.2f kWh\n", energia_gasta);
    printf("Valor a ser pago à companhia de Energia Elétrica: R$ %.2f\n", valor_pago);

    return 0;
}
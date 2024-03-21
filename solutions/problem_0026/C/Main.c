#include <stdio.h>

int main() {
    int anos_fumando, cigarros_por_dia;
    float preco_maco, valor_gasto;
    const int cigarros_por_maco = 20;

    // Entrada de dados
    printf("Informe o número de anos que você fuma: ");
    scanf("%d", &anos_fumando);

    printf("Informe o número de cigarros consumidos por dia: ");
    scanf("%d", &cigarros_por_dia);

    printf("Informe o preço de um maço de cigarros: R$ ");
    scanf("%f", &preco_maco);

    // Cálculo do total de cigarros consumidos
    int total_cigarros = anos_fumando * 365 * cigarros_por_dia;

    // Cálculo do valor gasto
    float maços_consumidos = (float)total_cigarros / cigarros_por_maco;
    valor_gasto = maços_consumidos * preco_maco;

    // Saída de resultados
    printf("\nTotal de cigarros consumidos: %d\n", total_cigarros);
    printf("Valor total gasto em cigarros: R$ %.2f\n", valor_gasto);

    return 0;
}
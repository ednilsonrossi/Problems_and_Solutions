#include <stdio.h>

int main() {
    int idade;
    long int batimentos;

    // Entrada de dados
    printf("Informe a idade da pessoa (em anos): ");
    scanf("%d", &idade);

    // Cálculo do total de batimentos
    float dias = idade * 365.25;
    float horas = dias * 24;
    float minutos = horas * 60;
    batimentos = minutos * 60;

    // Saída de resultados
    printf("\nSe viver %d anos, o coração baterá aproximadamente %ld vezes.\n", idade, batimentos);

    return 0;
}
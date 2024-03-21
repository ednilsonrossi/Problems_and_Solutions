#include <stdio.h>
#include <math.h>

int main() {
    float nota_a, nota_b, nota_c, nota_d;
    float media_aritmetica, media_quadratica, media_harmonica;

    // Entrada de dados
    printf("Informe a nota da prova A: ");
    scanf("%f", &nota_a);

    printf("Informe a nota da prova B: ");
    scanf("%f", &nota_b);

    printf("Informe a nota da prova C: ");
    scanf("%f", &nota_c);

    printf("Informe a nota da prova D: ");
    scanf("%f", &nota_d);

    // Cálculo da média aritmética
    media_aritmetica = (nota_a + nota_b + nota_c + nota_d) / 4;

    // Cálculo da média quadrática
    media_quadratica = sqrt((pow(nota_a, 2) + pow(nota_b, 2) + pow(nota_c, 2) + pow(nota_d, 2)) / 4);

    // Cálculo da média harmônica
    media_harmonica = 4 / ((1 / nota_a) + (1 / nota_b) + (1 / nota_c) + (1 / nota_d));

    // Saída de resultados
    printf("\nMédia aritmética: %.2f\n", media_aritmetica);
    printf("Média quadrática: %.2f\n", media_quadratica);
    printf("Média harmônica: %.2f\n", media_harmonica);

    return 0;
}
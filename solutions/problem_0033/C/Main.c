#include <stdio.h>

int main(){
    
    float nota1, nota2, nota3;
    float media;
    int peso1 = 5;
    int peso2 = 7;
    int peso3 = 3;
    int soma_pesos;

    printf("Informe as três notas: \n");
    scanf("%f%f%f", &nota1, &nota2, &nota3);

    soma_pesos = peso1 + peso2 + peso3;

    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / soma_pesos;

    printf("Média ponderada = %f\n", media);

    return 0;
}

/**
 * Solução iniciante, sem utilização de funções matemáticas. Objetivo de introdução à
 * programmação em linguagem C.
*/

#include <stdio.h>

int main(){
    int number, power;

    printf("Digite o número: ");
    scanf("%d", &number);

    power = number * number;
    printf("%d ^ 2 = %d \n", number, power);

    power = power * number;
    printf("%d ^ 3 = %d \n", number, power);

    return 0;
}

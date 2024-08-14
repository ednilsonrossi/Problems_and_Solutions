#include <stdio.h>

void dec_to_bin(int value);

int main(){
    int number;

    do{
        printf("Informe número inteiro positivo: ");
        scanf("%d", &number);
    } while (number < 0);

    printf("Resultado: %d = ", number);
    dec_to_bin(number);
    printf("\n\n");

    return 0;
}

void dec_to_bin(int value){
    if (value == 0){
        printf("%d", value % 2);
        return;
    }
    dec_to_bin(value / 2);
    printf("%d", value % 2);
    return;
}
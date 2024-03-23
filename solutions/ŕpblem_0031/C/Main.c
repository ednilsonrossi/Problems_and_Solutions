#include <stdio.h>

int inverter(int numero);
int soma(int a, int b);

int main(){
    int number;

    printf("Digite número inteiro entre 0 e 999: \n");
    scanf("%d", &number);

    printf("%d + %d = %d\n", 
        number,
        inverter(number),
        soma(number, inverter(number)));
    return 0;
}

int inverter(int numero){
    int u, d, c;

    c = numero / 100;
    numero = numero % 100;
    d = numero / 10;
    u = numero % 10;

    return u * 100 + d * 10 + c;
}

int soma(int a, int b){
    return a + b;
}
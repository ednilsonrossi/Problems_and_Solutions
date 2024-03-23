#include <stdio.h>

int digito_verificador(int numero);
int numero_quatro_algarismos(int numero);

int main(){
    
    int number;

    printf("Digite número de 0 a 999: \n");
    scanf("%d", &number);

    printf("Número resultante: %d\n", numero_quatro_algarismos(number));

    return 0;
}


int digito_verificador(int numero){
    int u, d, c;
    int calculate;

    c = numero / 100;
    numero = numero % 100;
    d = numero / 10;
    u = numero % 10;

    calculate = c + d * 3 + u * 5;

    return calculate % 7;
}

int numero_quatro_algarismos(int numero){
    numero = numero * 10 + digito_verificador(numero);
    return numero;
}
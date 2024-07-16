#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long total_moedas = 0;
    double valor_total = 0.0;
    int index;

    index = 0;
    while(index < 64){
        total_moedas += (unsigned long long) pow(2, index);
        index++;
    }

    valor_total = total_moedas * 0.25;

    printf("Número total de moedas.: %llu\n", total_moedas);
    printf("Valor total em reais...: R$ %.2f\n", valor_total);

    return 0;
}

/*
long long          grande_numero  =   9223372036854775807;  // Máximo valor de um long long com sinal
unsigned long long enorme_numero  = 18446744073709551615U;  // Máximo valor de um unsigned long long
*/
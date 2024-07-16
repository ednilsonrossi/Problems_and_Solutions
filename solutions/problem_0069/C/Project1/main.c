#include <stdio.h>

int soma_intervalo(int inicio, int fim);

int main(){
    int m, n;
    
    m = -1;
    n = 0;
    while(m <= n){
        printf("Informe os valores de M e N:\n");
        scanf("%d%d", &m, &n);
        if(m < n){
            printf("Soma doa números no intervalo [%d, %d] = %d\n", m, n, soma_intervalo(m, n));
        }
    }

    return 0;
}

int soma_intervalo(int inicio, int fim){
    int soma = 0;
    while(inicio <= fim){
        soma += inicio;
        inicio++;
    }
    return soma;
}
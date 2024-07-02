#include <stdio.h>

int maior(int arg1, int arg2);
int menor(int arg1, int arg2);

int main(int argc, char const *argv[])
{
    int homem_1, homem_2, mulher_1, mulher_2;
    int soma, produto;

    printf("Idade de 2 homens: \n");
    scanf("%d%d", &homem_1, &homem_2);

    printf("Idade de 2 mulheres: \n");
    scanf("%d%d", &mulher_1, &mulher_2);

    soma = maior(homem_1, homem_2) + menor(mulher_1, mulher_2);

    produto = menor(homem_1, homem_2) * maior(mulher_1, mulher_2);

    printf("Soma homem mais velho e mulher mais nova: %d\n", soma);
    printf("Produto homem mais novo e mulher mais velha: %d\n\n", produto);

    return 0;
}

int maior(int arg1, int arg2){
    int m = arg2;
    if(arg1 > arg2){
        m = arg1;
    }
    return m;
}

int menor(int arg1, int arg2){
    int m = arg2;
    if(arg1 < arg2)
        m = arg1;
    return m;
}
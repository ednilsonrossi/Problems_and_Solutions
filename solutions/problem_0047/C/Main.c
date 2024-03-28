/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>

int calcula(int arg1, int arg2);
int soma(int arg1, int arg2);
int multiplica(int arg1, int arg2);

int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("Digite A e B: \n");
    scanf("%d%d", &a, &b);

    c = calcula(a, b);

    printf("Resultado: %d\n\n", c);

    return 0;
}

int calcula(int arg1, int arg2){
    return arg1 == arg2 ? soma(arg1, arg2) : multiplica(arg1, arg2);
}

int soma(int arg1, int arg2){
    return arg1 + arg2;
}

int multiplica(int arg1, int arg2){
    return arg1 * arg2;
}
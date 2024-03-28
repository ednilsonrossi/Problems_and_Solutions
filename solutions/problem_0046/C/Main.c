/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>

int eh_triangulo(int a, int b, int c);
int eh_isosceles(int a, int b, int c);
int eh_equilatero(int a, int b, int c);
int eh_escaleno(int a, int b, int c);

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Digite os lados do triângulo: \n");
    scanf("%d%d%d", &a, &b, &c);

    if( !eh_triangulo(a, b, c) ){
        printf("Dados não foram triangulo.\n\n");
    }else{

        if(eh_equilatero(a, b, c)){
            printf("Triangulo equilatero.\n\n");
        }else{
            if(eh_isosceles(a, b, c)){
                printf("Triangulo isosceles.\n\n");
            }else{
                printf("Triangulo escaleno.\n\n");
            }
        }
    }
    return 0;
}

int eh_triangulo(int a, int b, int c){
    int resposta = 0;

    if( ((a + b) > c)  && ((a + c) > b) && ((b + c) > a) ){
        resposta = 1;
    }

    return resposta;
}

int eh_isosceles(int a, int b, int c){
    int resposta = 0;

    if( (a == b) || (a == c) || (b == c) ){
        resposta = 1;
    }

    return resposta;
}

int eh_equilatero(int a, int b, int c){
    return (a == b) && (a == c);
}

int eh_escaleno(int a, int b, int c){
    return (a != b) && (a != c) && (b != c);
}
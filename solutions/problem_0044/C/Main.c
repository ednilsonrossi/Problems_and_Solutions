/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>

void ordenar(float a, float b, float c);
void ordenar_2(float arg1, float arg2, float arg3);
void imprime(float a, float b, float c);

int main(int argc, char const *argv[])
{
    float n1, n2, n3;

    printf("Digite 3 números: \n");  
    scanf("%f%f%f", &n1, &n2, &n3);

    ordenar(n1, n2, n3);
    ordenar_2(n1, n2, n3);

    return 0;
}

void ordenar(float a, float b, float c){

    if( a < b){
        if(b < c){
            imprime(a, b, c);
        }else{
            if(a < c){
                imprime(a, c, b);
            }else{
                imprime(c, a, b);
            }
        }
    }else{
        if(b < c){
            if(a < c){
                imprime(b, a, c);
            }else{
                imprime(b, c, a);
            }
        }else{
            if(b < a){
                imprime(c, b, a);
            }else{
                imprime(c, a, b);
            }
        }
    }

}

/**
 * A função ordenar_2 trabalha realizando a troca dos valores das
 * variáveis, de forma que ao final do processo as variáveis 
 * estejam classificadas. Essa forma de implementação é um précursor
 * do método de classificação BubbleSort que é estudado em Estrutura 
 * de Dados.
*/
void ordenar_2(float arg1, float arg2, float arg3){
    float troca;

    if(arg1 > arg2){
        troca = arg1;
        arg1 = arg2;
        arg2 = troca;
    }

    if(arg1 > arg3){
        troca = arg1;
        arg1 = arg3;
        arg3 = troca;
    }

    if(arg2 > arg3){
        troca = arg2;
        arg2 = arg3;
        arg3 = troca;
    }

    imprime(arg1, arg2, arg3);
}

void imprime(float a, float b, float c){
    printf("\n[%.2f; %.2f; %.2f]\n\n", a, b, c);
}
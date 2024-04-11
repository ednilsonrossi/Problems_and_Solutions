/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>
#include <limits.h>
/**
 * A biblioteca limits.h está sendo utilizada neste programa
 * para permitir obter a constante que indica o menor valor 
 * inteiro possível.
*/

void categoria(int number);
void categoria_versao2(int number);

int main(int argc, char const *argv[]){
    int input;

    printf("Digite número: \n");
    scanf("%d", &input);

    categoria(input);
    categoria_versao2(input);

    return 0;
}

void categoria(int number){
    if(number <= 10){
        printf("F1\n");
    } else if(number > 10 && number <= 100){
        printf("F2\n");
    } else {
        printf("F3\n");
    }
}

void categoria_versao2(int number){
    /*
     * Nesta implementação está sendo utilizado o 
     * operador "..." para indicar um intervalo, 
     * contudo esse operador não é válido para o
     * C ANSI (C padrão / C99), sendo apenas aceito
     * no GCC por ser uma extensão do compilador.
     * 
     * Sugestão é conhecer o operador porém 
     * evitar sua utilização, visto que pode não 
     * ser aceito em todos os compiladores.
     */

    switch (number)
    {
        case INT_MIN ... 10:
            /**
             * Aqui está sendo testado o intervalo
             * do menor valor inteiro (INT_MIN) até
             * o valor 10.
            */
            printf("F1\n");
            break;
    
        case 11 ... 100:
            /**
             * Testando o intervalo de 11 à 100.
            */
           printf("F2\n");
           break;
        
        default:
            /**
             * Se os valores não foram classificados
             * nos intervalos acima então sobrou apenas
             * uma opção.
            */
            printf("F3\n");
            break;
    }
}
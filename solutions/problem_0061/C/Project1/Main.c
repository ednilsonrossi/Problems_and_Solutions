/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>
#include <stdbool.h>

bool eh_eleitor(int idade);

int main()
{
    int input;
    printf("Digite idade: \n");
    scanf("%d", &input);

    if(eh_eleitor(input)){
        printf("Pode votar.\n");
    }else{
        printf("Não pode votar.\n");
    }

    return 0;
}

bool eh_eleitor(int idade){
    return idade >= 16 ? true : false;
}
/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>

/**
 * Função retorma um caractere referente a categoria do 
 * nadador em relação à sua idade.
*/
char categoria(int idade);

int main(int argc, char const *argv[])
{
    int idade;

    printf("Digite a idade: \n");
    scanf("%d", &idade);

    if(idade < 5){
        printf("Nadador sem categoria\n\n");
    }else{
        printf("Nadador caregoria: %c\n\n", categoria(idade));
    }

    return 0;
}

char categoria(int idade){
    if(idade >= 5){
        if(idade <= 7){
            return 'A';
        }else{
            if(idade <= 10){
                return 'B';
            }else{
                if(idade <= 13){
                    return 'C';
                }else{
                    if(idade <= 18){
                        return 'D';
                    }else{
                        return 'E';
                    }
                }
            }
        }
    }
}
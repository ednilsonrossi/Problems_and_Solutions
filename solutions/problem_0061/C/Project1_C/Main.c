/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>
#include <stdbool.h>

bool eh_eleitor(int idade);
int leitura();
void impressao(bool eh_eleitor);

int main(){
    int idade, contador_eleitor = 0;
    int contador_pessoa;
    bool eleitor;

    contador_pessoa = 1;

    while(contador_pessoa <= 5){
        
        idade = leitura();
        eleitor = eh_eleitor(idade);
        impressao(eleitor);
        if(eleitor){
            contador_eleitor = contador_eleitor + 1;
        }

        contador_pessoa = contador_pessoa + 1;

    }

    printf("São eleitores %d pessoas.\n\n", contador_eleitor);
    return 0;
}

bool eh_eleitor(int idade){
    return idade >= 16 ? true : false;
}

int leitura(){
    int input;
    printf("Digite idade: \n");
    scanf("%d", &input);
    return input;
}

void impressao(bool eh_eleitor){
    if(eh_eleitor){
        printf("Pode votar.\n");
    }else{
        printf("Não pode votar.\n");
    }
}
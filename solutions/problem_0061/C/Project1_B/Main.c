#include <stdio.h>
#include <stdbool.h>

bool eh_eleitor(int idade);
int leitura();
void impressao(bool eh_eleitor);

int main(){
    int id1, id2, id3, id4, id5;

    id1 = leitura();
    impressao(eh_eleitor(id1));

    id2 = leitura();
    impressao(eh_eleitor(id2));

    id3 = leitura();
    impressao(eh_eleitor(id3));

    id4 = leitura();
    impressao(eh_eleitor(id4));

    id5 = leitura();
    impressao(eh_eleitor(id5));
    
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
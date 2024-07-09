/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>
#define QTDADE 30

int main(){
    
    int termo_a, termo_b, termo_c;
    int sequencia;

    printf("Digite 1º e 2º termos: \n");
    scanf("%d%d", &termo_a, &termo_b);

    //Verificar se os termos estão na ordem correta, caso contrário troca.
    if(termo_a > termo_b){
        //Troca dos termos.
        termo_c = termo_a;
        termo_a = termo_b;
        termo_b = termo_c;
    }

    printf("1º termo: %d\n", termo_a);
    printf("2º termo: %d\n", termo_b);
    sequencia = 2;

    while(sequencia <= QTDADE){
        termo_c = termo_a + termo_b;
        printf("%dº termo: %d\n", sequencia, termo_c);

        termo_a = termo_b;
        termo_b = termo_c;
        sequencia += 1;
    }

    return 0;
}

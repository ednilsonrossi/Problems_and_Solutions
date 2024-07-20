#include <stdio.h>

int main(){
    
    int index, lines, n;

    /**
     * Usando uma estrutura de repetição do...while() para
     * indicar a utilização indefinida das repetições, visto 
     * que não sabe-se quantas vezes o usuário apresentará 
     * uma entrada inválida. Entrada inválida são valores 
     * negativos.
     */
    do{
        printf("Informe quantidade de linhas: ");
        scanf("%d", &n);
    }while(n < 0);

    index = 1;
    lines = 1;
    while (lines <= n){

        if(index % 4 == 0){
            printf("PUM\n");
            lines += 1;
        } else {
            printf("%4d ", index);
        }
        index += 1;
    }
    return 0;
}

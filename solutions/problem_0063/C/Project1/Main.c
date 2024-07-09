/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */


#include <stdio.h>

/**
 * Constante utilizada para indicar qual o termo da
 * série de Fibinacci é o desejado.
*/
#define TERMO_DESEJADO 20


/*
 * Essa solução considera o uso de uma estrutura de repetição
 * com a quantitidade de repetições DETERMINADA, ou seja, a 
 * quantidade de repetições é conhecida antes de iniciar a 
 * estrutura de repetição.
*/
int main(){
    /**
     * As variáveis termo_a, termo_b e termo_c representarão
     * os termos da série de Fibonacci. A cada calculo os termos
     * são atualizados, sendo que serão mantidos apenas os três
     * últimos termos em memória (variáveis).
     * 
     * A variável sequência gerencia qual o termo está sendo 
     * calculado e apresentado, assim, essa variável é que 
     * faz o controle da estrutura de repetição em sua CONDIÇÃO
     * DE PARADA.
    */
    int termo_a, termo_b, termo_c;
    int sequencia;

    termo_a = 0;
    termo_b = 1;
    printf("1º termo: %d\n", termo_a);
    printf("2º termo: %d\n", termo_b);

    /*
        A sequencia é INICIALIZADA com o valor 2, visto que os 
        dois primeiros termos da série já foram atribuídos, mesmo
        que de forma manual.
    */
    sequencia = 3;

    while(sequencia <= TERMO_DESEJADO){
        termo_c = termo_a + termo_b;
        printf("%dº termo: %d\n", sequencia, termo_c);

        /**
         * Depois de calcular e apresentar o termo, atualiza-se as
         * variáveis com os termos, dando um passo na série e 
         * aumentando a sequencia.
        */
        termo_a = termo_b;
        termo_b = termo_c;
        sequencia = sequencia + 1;
    }

    return 0;
}

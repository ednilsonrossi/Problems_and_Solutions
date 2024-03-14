/**
 * Solução iniciante, sem utilização de funções matemáticas. Objetivo de introdução à
 * programmação em linguagem C.
*/

#include <stdio.h>

int main(int argc, char const *argv[]){
    int volume, comprimento, largura, altura;

    printf("Informe os valores de Comprimento, Largura e Altura: \n");
    scanf("%d%d%d", &comprimento, &largura, &altura);
    /* scanf com a leitura de 3 valores, utiliza-se três marcadores de dados
     * e as 3 variáveis. Atenção, pois os dados serão atribuídos para as variáveis
     * da esquerda para a direita, ou seja, o primeiro valor será atribuído à
     * comprimento, o segundo para largura e o terceiro para altura.
     **/

    volume = comprimento * largura * altura;

    printf("Voluma da caixa: %d \n", volume);

    return 0;
}

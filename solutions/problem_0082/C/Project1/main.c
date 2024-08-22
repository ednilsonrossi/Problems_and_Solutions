/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>
#include <time.h>

#define N 5

int main(){

    /**
     * Definir a semente de um número aleatório para que 
     * o algoritmo gere números distintos a cada vez que 
     * for executado. A semente utilizada é a hora atual
     * do sistema, considerando o valor em milisegundos.
     * 
     * Para configurar a semente, utiliza-se a função 
     * srand(), destaca-se que a semente é definida uma
     * vez no programa, ou seja, não está dentro de uma
     * estrutura de repetição.
     */
    srand( (unsigned) time(NULL) );

    int mat[N][N];

    /**
     * Neste exemplo a matriz está sendo acessada 
     * na ordem coluna e linha, ou seja, serão preenchidas
     * todas as células da colina 0 para depois preencher
     * as da coluna 1 e assim sucessivamete.
     */
    for(int column = 0; column < N; column += 1){
        for(int row = 0; row < N; row += 1){
            /**
             * O aleatório gerado será um valor no
             * intervalo de 0 a 999 (inclusive).
             */
            mat[row][column] = rand() % 1000;
        }
    }

    /**
     * Nesse exemplo a matriz é percorrida de traz para 
     * frente.
     */
    int max_row = N - 1;
    int max_col = N - 1;
    for(int i = N - 1; i >= 0; i -= 1){
        for(int j = N - 1; j >= 0; j -= 1){
            if(mat[i][j] > mat[max_row][max_col]){
                max_row = i;
                max_col = j;
            }
        }
    }

    printf("Maior valor: %d em [%d][%d]\n", mat[max_row][max_col],
                                            max_row,
                                            max_col);


    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("\t%4d", mat[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}

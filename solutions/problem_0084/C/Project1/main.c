#include <stdio.h>
#include <stdbool.h>

#define ORDEM 5

void scan_matrix(int array[ORDEM][ORDEM]);
bool is_identity(int array[ORDEM][ORDEM]);

int main(){
    int mat[ORDEM][ORDEM];

    scan_matrix(mat);
    if (is_identity(mat)){
        printf ("Matriz é identidade.\n");
    } else {
        printf ("Matriz não é identidade.\n");
    }

    return 0;
}


void scan_matrix(int array[ORDEM][ORDEM]){
    for (int i = 0; i < ORDEM; i++){
        for (int j = 0; j < ORDEM; j++){
            printf("MAT[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

bool is_identity(int array[ORDEM][ORDEM]){
    bool identity = true;
    int i, j;


    /**
     * Por questão de otimização, não é necessário percorrer
     * toda a matriz, basta que algum valor não atenda a propriedade
     * da matriz identidade que pode-se encerrar a busca. Por isso,
     * o número de repetições não é conhecido, de forma que utiliza-se
     * uma estrutura de repetição indefinida com as condições de 
     * percorrer os índices da matriz e também que verifique se a 
     * matriz continua sendo identidade.
     */
    i = 0;
    while (i < ORDEM && identity) {
        j = 0;
        while (j < ORDEM && identity) {
            if (i == j && array[i][j] != 1) {
                /**
                 * Na diagonal principal os índices i e j são iguais
                 * então nessas posições o valor da matriz deve ser 1,
                 * caso contrário a matriz não é identidade.
                 */
                identity = false;
            }           
            if (i != j && array[i][j] != 0) {
                /**
                 * Fora da diagonal principal os índices da matriz são
                 * diferentes, então nesse caso se verifica se o valor 
                 * da matriz é diferente de zero, se for, então a matriz
                 * não é identidade.
                 */
                identity = false;
            }
            j += 1;
        }
        i += 1;
    }
    return identity;
}
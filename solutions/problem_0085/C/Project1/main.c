#include <stdio.h>
#define ORDEM 3

int main(){
    float matriz[ORDEM][ORDEM];
    float arr_principal[ORDEM];
    float arr_secundaria[ORDEM];

    for (int i = 0; i < ORDEM; i++){
        for(int j = 0; j < ORDEM; j++){
            printf("MAT[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    /**
     * Gerar o array com elementos da diagonal
     * principal significa copiar para o array
     * os elementos da matriz cujos índices
     * são iguais, ou seja, (0,0), (1,1), (2,2)
     * (3,3) e (4,4).
     * Observa-se que o valor do índice é o mesmo
     * assim, basta o uso de uma variável para 
     * percorrer a diagonal principal.
     */
    for (int i = 0; i < ORDEM; i++){
        arr_principal[i] = matriz[i][i];
    }

    /**
     * A diagonal secundária possui uma inversão na
     * lógica dos índices de forma que o índice
     * da linha aumenta e o da coluna diminui: (0,4),
     * (1,3), (2,2), (3,1) e (4,0). 
     * Nesse caso o array com elementos da diagonal
     * secundária necessita de dois índices, porém
     * não é necessário percorrer a matriz completa
     * apenas a diagonal.
     */
    for (int i = 0, j = ORDEM-1; i < ORDEM; i++, j--){
        arr_secundaria[i] = matriz[i][j];
    }

    printf("\nDiagonal principal: \n");
    for(int i = 0; i < ORDEM; i++){
        printf("%5.1f ", arr_principal[i]);
    }

    printf("\nDiagonal secundária: \n");
    for(int i = 0; i < ORDEM; i++){
        printf("%5.1f ", arr_secundaria[i]);
    }

    return 0;
}

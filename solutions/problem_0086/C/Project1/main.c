#include <stdio.h>

#define MAX 50

int main(){
    int n;
    do{
        printf("Informe ordem da matriz: ");
        scanf("%d", &n);
    } while (n > MAX || n < 1);

    int mat[n][n];
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("MAT[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    int pos_maior = 0;
    for (int i = 1; i < n; i++){
        if (mat[i][i] > mat[pos_maior][pos_maior]){
            pos_maior = i;
        }
    }

    int pos_menor = 0;
    for (int i = 1; i < n; i++){
        if (mat[i][i] < mat[pos_menor][pos_menor]){
            pos_menor = i;
        }
    }

    printf("Maior elemento da diagonal principal: %d\n", mat[pos_maior][pos_maior]);
    printf("Menor elemento da diagonal principal: %d\n", mat[pos_menor][pos_menor]);
    return 0;
}

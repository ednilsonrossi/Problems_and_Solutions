/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>
#define N 5     // Constante que indica a ordem da 
                // matriz quadrada

int main(){
    float matrix[N][N];

    // Inicializar todas as células da matriz com o valor zero
    for(int row = 0; row < N; row++){
        for(int column = 0; column < N; column++){
            matrix[row][column] = 0.0;
        }
    }

    int row, column;
    float value;
    do{
        // Entrada dos valores das coordenadas e do valor
        printf("Digite linha, coluna e valor: \n");
        scanf("%d %d %f", &row, &column, &value);

        if(row > N || row < 0 || column > N || column < 0){
            printf("Posição inválida.\n");
        } else {
            matrix[row][column] = value;
        }

    } while (row >= 0 && column >= 0);

    printf("Matriz preenchida: \n");
    for(row = 0; row < N; row += 1){
        for(column = 0; column < N; column += 1){
            printf("\t%5.2f", matrix[row][column]);
        }
        printf("\n");
    }

    return 0;
}

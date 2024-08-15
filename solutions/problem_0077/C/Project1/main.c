#include <stdio.h>
#define MAX_SIZE 10

int main(){
    int array[MAX_SIZE];
    int size = 5;

    for(int i = 0; i < size; i++){
        printf("[%d]: ", i);
        scanf("%d", &array[i]);
    }

    /**
     * Sobrescreve a posição zero, trazendo todos os 
     * valores posteriores uma posição para frente.
     */
    for(int position = 0; position < size - 1; position ++){
        array[position] = array[position + 1];
    }
    size--;     // Size-1 pois a variável de controle do tamanho
                // do array diminui uma posição.

    for(int i = 0; i < size; i++){
        printf("[%d] = %d\n", i, array[i]);
    }
    return 0;
}



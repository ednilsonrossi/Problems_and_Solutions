#include <stdio.h>
#define MAXSIZE 5

void find_key(int array[], int key);

int main(){
    int dataset[MAXSIZE];
    int search;

    for (int i = 0; i < MAXSIZE; i++){
        printf("Array[%d]: ", i);
        scanf("%d", &dataset[i]);
    }
    
    printf("Buscar por: ");
    scanf("%d", &search);

    find_key(dataset, search);
    return 0;
}

void find_key(int array[], int key){
    for(int index = 0; index < MAXSIZE; index+=1){
        printf("Índice %.2d: ", index);
        if(array[index] == key){
            printf("ACHEI.\n");
        } else {
            printf("NÃO ACHEI.\n");
        }
    }
}
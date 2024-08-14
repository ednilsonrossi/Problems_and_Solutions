/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>
#include <stdbool.h>
#include <time.h>       // Para recuperar hora do sistema local
#define MAX_SIZE 100

// Assinaturas de funções

void load_array(int arr[], int size);
void read_array(int arr[], int size);
void print_array(int arr[], int size);
bool linear_searcher(int arr[], int size, int target);

int main(){

    int array_a[MAX_SIZE];      // Array que contém 100 elementos aleatórios.
    int array_b[7];

    /* Carregar vetor de 100 posições com aleatórios. */
    load_array(array_a, 100);
    print_array(array_a, 100);
    
    /* Ler 7 valores do usuário. */
    read_array(array_b, 7);

    /* Verificar quantos elementos de array_b estão presentes no array_a */
    int counter = 0;
    for(int i = 0; i < 7; i++){
        if(linear_searcher(array_a, 100, array_b[i]) == true){
            counter ++;
        }
    }
    printf("Existem %d elementos do vetor B no vetor A.\n", counter);

    return 0;
}

/**
 * Carrega um array de inteiros com valores aleatórios no 
 * intervalo de 1 a 1000.
 */
void load_array(int arr[], int size){
    srand( (unsigned) time(NULL) );     // Gera uma semente de números aleatórios a partir da hora atual do sistema, recuperando a hora em milisegundos em um variável long.

    for(int index = 0; index < size; index ++){
        // a função rand() gera um aleatório longo, então
        // aplicamos o resto da divisão por 1000, que gera
        // valores de 0 a 999, porém para gerar valores de 
        // 1 a 1000, adicionamos uma unidade ao resto da divisão.
        arr[index] = (rand() % 1000) + 1;   
    }
}
/** 
 * Le um vetor de inteiros com o tamanho passado como argumento.
 */
void read_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("Array[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

/**
 * Imprime um vetor passado como argumento.
 */
void print_array(int arr[], int size){
    for(int i=0; i < size; i++){
        printf("[%d] = %d\n", i, arr[i]);
    }
}

/**
 * Implementação de uma busca sequencial que encerra a busca
 * caso o valor seja encontrado.
 */
bool linear_searcher(int arr[], int size, int target){
    bool founded = false;

    int index = 0;
    while (index < size && founded == false){
        if (arr[index] == target){
            founded = true;
        }
        index ++;
    }
    
    return founded;
}
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
void print_array(int arr[], int size);

int main(){

    int array_a[MAX_SIZE];  
    int size = 50;   
   

    /* Carregar vetor de 50 posições com aleatórios. */
    load_array(array_a, size);
    print_array(array_a, size);
    
    int size_impar = 0;
    for(int i = 0; i < size; i++){
        if(array_a[i] % 2 == 1){
            array_a[size_impar] = array_a[i];
            size_impar += 1;
        }
    }
    size = size_impar;

    print_array(array_a, size);
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
 * Imprime um vetor passado como argumento.
 */
void print_array(int arr[], int size){
    for(int i=0; i < size; i++){
        printf("[%d] = %d\n", i, arr[i]);
    }
}

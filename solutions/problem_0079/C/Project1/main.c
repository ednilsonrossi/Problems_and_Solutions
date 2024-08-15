#include <stdio.h>
#include <stdbool.h>
#define MAX 10

bool is_even(int number);
void read_array(int arr[], int size);
void print_array(int arr[], int size);
void sort(int arr[], int size);
void sort_descendant(int arr[], int size);

int main(){
    
    int dataset[MAX];       // Array com os dados do usuário
    int even[MAX];          // Array com os números pares
    int odd[MAX];           // Array com os números impares
    int dataset_size;       // Controle do tamanho do array dataset
    int even_size;          // Controle do tamanho do array even
    int odd_size;           // COntrole do tamanho do array odd

    dataset_size = 10;
    printf("Array Dataset:\n");
    for(int index = 0; index < dataset_size; index++){
        printf("[%d]: ", index);
        scanf("%d", &dataset[index]);
    }

    even_size = 0;          // Indica a quantidade de elementos do array
    odd_size = 0;           // Indica a quantidade de elementos do array
    /**
     * Processo que separa os valores pares e impares em vetores 
     * específicos. A cada novo valor inserido no array específico
     * a variável de controle é incrementada.
     */
    for(int index = 0; index < dataset_size; index ++){
        if (is_even(dataset[index])){
            even[even_size] = dataset[index];
            even_size += 1;
        } else {
            odd[odd_size] = dataset[index];
            odd_size += 1;
        }
    }

    /**
     * Cassificação dos arrays de pares e impares.
     * 
     * Conforme enunciado, o array de pares é ordenado
     * de forma crescente e o array de impares
     * de forma decrescente.
     */
    sort(even, even_size);
    sort_descendant(odd, odd_size);


    /**
     * Impressão dos arrays.
     */
    printf("Array pares:");
    print_array(even, even_size);

    printf("Array impares:");
    print_array(odd, odd_size);

    return 0;
}


/**
 * Le os dados do usuário e insere em um array.
 */
void read_array(int arr[], int size){
    for(int index = 0; index < size; index += 1){
        printf("[%d]: ", index);
        scanf("%d", &arr[index]);
    }
}

/**
 * Imprime o array no terminal.
 */
void print_array(int arr[], int size){
    printf("\n[ ");
    for(int index = 0; index < size; index++){
        if (index != size - 1){
            printf("%d, ", arr[index]);
        } else {
            printf("%d ]\n\n", arr[index]);
        }
    }
}

/**
 * Função retorna um boolean indicando se o valor do 
 * argumento é par ou não, ou seja, se o argumento
 * é par o retorno é true, caso seja impar o retorno
 * é false.
 */
bool is_even(int number){
    return number % 2 == 0;
}

void sort(int arr[], int size){
    /**
     * Algoritmo para classificação é o selectionsort
     * que consiste em localizar o menor elemento do array
     * e trazer para a posição da frente, trocando os valores.
     * O processo se repete a cada posição do array.
     */
    int low_position, temp;

    for(int index = 0; index < size-1; index+=1){
        //Localiza a posição do menos valor
        low_position = index;
        for(int busca = index; busca < size; busca += 1){
            if(arr[busca] < arr[low_position]){
                low_position = busca;
            }
        }

        //Trocar a posição do menor com a posição index
        temp = arr[index];
        arr[index] = arr[low_position];
        arr[low_position] = temp;
    }
}

void sort_descendant(int arr[], int size){
    /**
     * Algoritmo para classificação é o selectionsort
     * que consiste em localizar o maior elemento do array
     * e trazer para a posição da frente, trocando os valores.
     * O processo se repete a cada posição do array. 
     * 
     * Observa-se que esse algoritmo é uma classificação
     * em ordem decrescente.
     */
    int high_position, temp;

    for(int index = 0; index < size-1; index+=1){
        //Localiza a posição do maior valor
        high_position = index;
        for(int busca = index; busca < size; busca += 1){
            if(arr[busca] > arr[high_position]){
                high_position = busca;
            }
        }

        //Trocar a posição do maior com a posição index
        temp = arr[index];
        arr[index] = arr[high_position];
        arr[high_position] = temp;
    }
}
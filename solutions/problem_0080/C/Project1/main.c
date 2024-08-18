#include <stdio.h>
#define TIME_SHOTS 10       // Constante define a quantidade de tomadas de
                            // tempo.

void input_times(int lane, int arr_lane[], int time_shots);
int best_time(int arr[], int time_shots);
int worst_time(int arr[], int time_shots);
double average_shot(int lane1[], int lane2[], int lane3[], int lane4[], int lane5[], int shot);

int main(){
    
    int pool_lane_1[TIME_SHOTS];        // Array que contem as tomadas de tempo da raia 1.
    int pool_lane_2[TIME_SHOTS];
    int pool_lane_3[TIME_SHOTS];
    int pool_lane_4[TIME_SHOTS];
    int pool_lane_5[TIME_SHOTS];

    // Entrada de dados, chamada da função input_times() uma vez para cada raia.
    printf("Raia 1:\n");
    input_times(1, pool_lane_1, TIME_SHOTS);

    printf("Raia 2:\n");
    input_times(2, pool_lane_2, TIME_SHOTS);

    printf("Raia 3:\n");
    input_times(3, pool_lane_3, TIME_SHOTS);

    printf("Raia 4:\n");
    input_times(4, pool_lane_4, TIME_SHOTS);

    printf("Raia 5:\n");
    input_times(5, pool_lane_5, TIME_SHOTS);

    printf("Menores tempos: \n");
    printf("Raia 1: %ds.\n", best_time(pool_lane_1, TIME_SHOTS));
    printf("Raia 2: %ds.\n", best_time(pool_lane_2, TIME_SHOTS));
    printf("Raia 3: %ds.\n", best_time(pool_lane_3, TIME_SHOTS));
    printf("Raia 4: %ds.\n", best_time(pool_lane_4, TIME_SHOTS));
    printf("Raia 5: %ds.\n", best_time(pool_lane_5, TIME_SHOTS));

    printf("Piores tempos: \n");
    printf("Raia 1: %ds.\n", worst_time(pool_lane_1, TIME_SHOTS));
    printf("Raia 2: %ds.\n", worst_time(pool_lane_2, TIME_SHOTS));
    printf("Raia 3: %ds.\n", worst_time(pool_lane_3, TIME_SHOTS));
    printf("Raia 4: %ds.\n", worst_time(pool_lane_4, TIME_SHOTS));
    printf("Raia 5: %ds.\n", worst_time(pool_lane_5, TIME_SHOTS));


    printf("Média de cada tomada de tempo:\n");
    for(int i = 0; i < TIME_SHOTS; i++){
        printf("%dª tomada: %.3fs.\n", i+1, average_shot(pool_lane_1, pool_lane_2, pool_lane_3, pool_lane_4, pool_lane_5, i));
    }

    return 0;
}

/**
 * Função realizada a leitura das tomadas de tempo de uma raia 
 * da piscina, cada posição do array indica uma tomada de tempo
 * e um array é exclusivo de um nadador/raia.
 */
void input_times(int lane, int arr_lane[], int time_shots){
    for(int index = 0; index < time_shots; index += 1){
        printf("%dº tempo da raia %d: ", index+1, lane);
        scanf("%d", &arr_lane[index]);
    }
}

/**
 * Retorna o melhor (menor) tempo de um nadador, ou seja, o 
 * menor valor, em segundos, existente no array.
 */
int best_time(int arr[], int time_shots){
    int min_position = 0;
    for(int index = 1; index < time_shots; index++){    // index inicia em 1 pois a posição zero foi considerada a menor.
        if(arr[index] < arr[min_position]){
            min_position = index;
        }
    }
    return arr[min_position];                           // retorna o menor valor do array.
}

/**
 * Retorna o pior (maior) tempo de um nadador, ou seja, o
 * maior valor existente no array.
 */
int worst_time(int arr[], int time_shots){
    int max_position = 0;
    for(int index = 1; index < time_shots; index++){
        if(arr[index] > arr[max_position]){
            max_position = index;
        }
    }
    return arr[max_position];
}

/**
 * Calcula o tempo média de um tomada de tempo considerando
 * as 5 raias da piscina. Ou seja, calcula a média dos valores
 * na mesma posição de cada array.
 */
double average_shot(int lane1[], int lane2[], int lane3[], int lane4[], int lane5[], int shot){
    double calc = 0.0;

    calc = lane1[shot];
    calc += lane2[shot];
    calc += lane3[shot];
    calc += lane4[shot];
    calc += lane5[shot];

    return calc / 5.0;
}
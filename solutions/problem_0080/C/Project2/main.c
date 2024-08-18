/**
 * Solução do problema usando array bidimensional.
 */

#include <stdio.h>

#define LANES 5         // Define a quantidade de raias, no caso linhas.
#define SHOTS 2        // Define a quantidade de tomadas de tempo, no caso colunas.

int main(){
    int times[LANES][SHOTS];    // Declara um array bidimensional (matriz) com 
                                // LANES linhas e SHOTS colunas.

    for(int lane = 0; lane < LANES; lane += 1){
        // Para cada linha da matriz faremos a leitura de cada um 
        // dos tempos do nadador.
        printf("\nRaia %d:\n", lane + 1);

        for(int shot = 0; shot < SHOTS; shot += 1){
            printf("%dº tempo: ", shot + 1);
            scanf("%d", &times[lane][shot]);
        }
    }

    printf("Menores tempos: \n");
    for(int lane = 0; lane < LANES; lane += 1){
        printf("Raia: %d: ", lane + 1);
        int min_shot = 0;
        for(int shot = 1; shot < SHOTS; shot += 1){
            if(times[lane][shot] < times[lane][min_shot]){
                min_shot = shot;
            }
        }
        printf("%ds.\n", times[lane][min_shot]);
    }

    printf("Piores tempos: \n");
    for(int lane = 0; lane < LANES; lane += 1){
        printf("Raia: %d: ", lane + 1);
        int max_shot = 0;
        for(int shot = 1; shot < SHOTS; shot += 1){
            if(times[lane][shot] > times[lane][max_shot]){
                max_shot = shot;
            }
        }
        printf("%ds.\n", times[lane][max_shot]);
    }

    printf("Média de cada tomada de tempo:\n");
    for(int shot = 0; shot < SHOTS; shot += 1){
        /* Calcular a média de cada tomada de tempo
            dentre todas as raias. */
        double calc = 0.0;
        for(int lane = 0; lane < LANES; lane += 1){     // Somar as tomadas do shot para cada uma das raias.
            calc += times[lane][shot];
        }
        printf("%dª tomada: %.3fs.\n", shot + 1, calc / LANES);
    }


    return 0;
}

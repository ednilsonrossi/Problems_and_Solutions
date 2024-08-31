#include "carro_lib.h"
#define MAX 100

int main(){
    TCarro array[MAX];
    int tamanho_array = 0;
    char continuar;
    
    do{
        array[tamanho_array] = ler_carro();
        tamanho_array += 1;

        printf("Continuar leitura (S/n): ");
        continuar = getchar();
        continuar = toupper(continuar);
        __fpurge(stdin);
    }while (tamanho_array < MAX && continuar != 'N');

    printf("Veículos com excesso de velocidade: \n");
    for (int i = 0; i < tamanho_array; i++){
        if (faixa_excesso(array[i], 80) == 1){
            imprime_carro(array[i]);
            printf(" ACIMA DE 20%%.\n");
        } else if (faixa_excesso(array[i], 80) == 0) {
            imprime_carro(array[i]);
            printf(" ATÉ 20%%.\n");
        }
    }

    return 0;
}


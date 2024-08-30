#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX 100


/**
 * Definição da struct carro.
 */
struct carro{
    int placa;
    double velocidade_aferida;
};

/**
 * Funções que manipulam dados da struct.
 */
struct carro ler_carro();
void imprime_carro(struct carro oCarro);
double velocidade_considerada(struct carro oCarro);
bool esta_acima_do_limite(struct carro oCarro, double limite);
/**
 * Recebe um carro e retorna: 
 *  -1 caso a velocidade não esteja acima do limite
 *   0 caso a velocidade esteja acima do limite até 20%
 *   1 caso a velocidade esteja acima do limite além de 20%
 */
int faixa_excesso(struct carro oCarro, double limite);



int main(){
    struct carro array[MAX];
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

int faixa_excesso(struct carro oCarro, double limite){
    int retorno;
    if (!esta_acima_do_limite(oCarro, limite) ){
        retorno = -1;
    } else {
        double lim_mais_20 = limite * 1.2;
        if (!esta_acima_do_limite(oCarro, lim_mais_20)){
        //if (velocidade_considerada(oCarro) <= lim_mais_20){
            retorno = 0;
        } else {
            retorno = 1;
        }
    }
    return retorno;
}

bool esta_acima_do_limite(struct carro oCarro, double limite){
    return velocidade_considerada(oCarro) > limite;
}

double velocidade_considerada(struct carro oCarro){
    return oCarro.velocidade_aferida * 0.93;
}

struct carro ler_carro(){
    struct carro oCarro;
    printf("Placa (somente números)...: ");
    scanf("%d", &oCarro.placa);
    __fpurge(stdin);
    printf("Velocidade aferida (km/h).: ");
    scanf("%lf", &oCarro.velocidade_aferida);
    __fpurge(stdin);
    return oCarro;
}

void imprime_carro(struct carro oCarro){
    printf("> Placa: %4d | %6.2lf km/h | %6.2lf km/h", 
            oCarro.placa, 
            oCarro.velocidade_aferida,
            velocidade_considerada(oCarro) );
}
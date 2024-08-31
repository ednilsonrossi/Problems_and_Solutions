#include <stdio.h>
#include <stdio_ext.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * Definição da struct carro.
 */
struct carro{
    int placa;
    double velocidade_aferida;
};

typedef struct carro TCarro;

/**
 * Funções que manipulam dados da struct.
 */
TCarro ler_carro();
void imprime_carro(TCarro oCarro);
double velocidade_considerada(TCarro oCarro);
bool esta_acima_do_limite(TCarro oCarro, double limite);
/**
 * Recebe um carro e retorna: 
 *  -1 caso a velocidade não esteja acima do limite
 *   0 caso a velocidade esteja acima do limite até 20%
 *   1 caso a velocidade esteja acima do limite além de 20%
 */
int faixa_excesso(struct carro oCarro, double limite);

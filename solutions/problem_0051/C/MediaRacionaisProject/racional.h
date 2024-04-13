/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>      //Entrada e saída padrão
#include <stdlib.h>     //Alocação de memória
#include <stdbool.h>    //Booleano


typedef struct numero_racional *Racional_Type;

/*
 * Instanciar / Criar um racional da memória
 */
Racional_Type criarRacional(int, int);

/**
 * Funcionalidade responsável por liberar a memória
 * ocupada por um número racional.
*/
void destruirRacional(Racional_Type);

/*
 * Funcionalidade recebe um número racional e
 * simplifica esse número, por exemplo, recebe-se o
 * valor 2/4 que é simplificado para 1/2.
 */
void simplificaRacional(Racional_Type*);

/*
 * Funcionalidade que recebe dois números racionais e
 * retorna a soma destes números.
 */
Racional_Type somaRacional(Racional_Type, Racional_Type);

/*
 * Funcionalidade que recebe dois números racionais e retorna o produto
 * destes números.
 */
Racional_Type multiplicaRacional(Racional_Type, Racional_Type);

/*
 * Funcionalidade que verifica se o número recebido é ou não válido.
 */
bool ehValidoRacional(Racional_Type);

/*
 * Escrever na tela o valor racional recebido como argumento.
 * No formato num/den, por exemplo 1/2.
 */
void printRacional(Racional_Type);

/*
 * Funcionalidade que obtem do usuário os valores para um número
 * racional. O racional lido, se válido, é retornado ao programa.
 * Caso o racional não seja válido é retornado o valor zero (0/1).
 */
Racional_Type scanRacional();

int mdc(int, int);
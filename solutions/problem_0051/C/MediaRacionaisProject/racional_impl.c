/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include "racional.h"

struct numero_racional{
    int numerador;
    int denominador;
};


Racional_Type criarRacional(int numerador, int denominador){
    Racional_Type numero;

    numero = malloc(sizeof(struct numero_racional));

    if(numero != NULL){
        numero->numerador = numerador;
        numero->denominador = denominador;

        if(ehValidoRacional(numero) == false){
            numero->numerador = 0;
            numero->denominador = 1;
        }
    }

    return numero;
}

void destruirRacional(Racional_Type numero){
    free(numero);
}

bool ehValidoRacional(Racional_Type numero){
    return numero->denominador == 0?false:true;
}

void simplificaRacional(Racional_Type* numero){
    int vMdc;
    vMdc = mdc( (*numero)->numerador, (*numero)->denominador);
    (*numero)->numerador = (*numero)->numerador / vMdc;
    (*numero)->denominador = (*numero)->denominador / vMdc;
}

int mdc(int valor1, int valor2){
    int resto;
    do{
        resto = valor1 % valor2;
        valor1 = valor2;
        valor2 = resto;
    }while(resto != 0);
    return valor1;
}

Racional_Type scanRacional(){
    int n, d;
    scanf("%d", &n);
    scanf("%d", &d);

    Racional_Type numero;
    numero = criarRacional(n, d);

    return numero;
}

void printRacional(Racional_Type numero){
    printf("%d/%d", numero->numerador, numero->denominador);
}

Racional_Type somaRacional(Racional_Type n1, Racional_Type n2){
    Racional_Type soma;

    soma = criarRacional(0, 1);

    soma->numerador = n1->numerador * n2->denominador + n2->numerador * n1->denominador;
    soma->denominador = (n1->denominador) * (n2->denominador);

    simplificaRacional(&soma);

    return soma;
}

Racional_Type multiplicaRacional(Racional_Type n1, Racional_Type n2){
    Racional_Type produto;

    produto = criarRacional(0, 1);

    produto->numerador = n1->numerador * n2->numerador;
    produto->denominador = n1->denominador * n2->denominador;

    simplificaRacional(&produto);

    return produto;
}

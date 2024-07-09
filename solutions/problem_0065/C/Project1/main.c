/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>

float to_celsius(float fahrenheit);

/**
 * Essa solução utiliza uma estrutura de repetição DETERMINADA, visto
 * que se conhece o número de repetições que serão aplicadas.
*/
int main(int argc, char const *argv[]){
    
    float temperatura;

    //Inicialização do contador
    temperatura = 50;

    //estrutura condicional + CONDIÇÃO DE PARADA
    while (temperatura <= 150){
        printf("%6.1fºF \t %6.3fºC\n", temperatura, to_celsius(temperatura));

        //Incremento do contador
        temperatura += 1;
    }
    
    return 0;
}

float to_celsius(float fahrenheit){
    return ( 5.0 / 9.0 * (fahrenheit - 32) );
}
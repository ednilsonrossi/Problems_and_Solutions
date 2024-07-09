/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>
#include <stdbool.h>

bool codigo_valido(int code);
int calcula_digito(int n);

int main(){
    int codigo;

    printf("Digite o código entre 1 e 9999: \n");
    scanf("%d", &codigo);

    if(codigo_valido(codigo)){
        //Calcula o dígito
        printf("Dígito verificador de %d: %d\n\n", 
            codigo, 
            calcula_digito(codigo)
        );
    }

    return 0;
}

bool codigo_valido(int code){
    bool eh_valido; //Booleano ou Lógico
    if(code >= 1 && code <= 9999){
        eh_valido = true;
    }else{
        eh_valido = false;
    }
    return eh_valido;
}

int calcula_digito(int n){
    int d1, d2, d3, d4;
    int calc;

    d1 = n / 1000;
    n = n % 1000;
    d2 = n / 100;
    n = n % 100;
    d3 = n / 10;
    d4 = n % 10;
    
    //item 1
    calc = (d1 * 5) + (d2 * 4) + (d3 * 3) + (d4 * 2);

    //item 2
    calc = calc % 11;

    //item 3
    calc = 11 - calc;

    //item 4
    if(calc == 10 || calc == 11){
        calc = 0;
    }

    return calc;
}
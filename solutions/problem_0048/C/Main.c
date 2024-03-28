/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>

float function(float arg1);

int main(int argc, char const *argv[])
{
    float number;

    printf("Digite número: \n");
    scanf("%f", &number);

    printf("Resultado: %.3f\n\n", function(number) );
    return 0;
}

float function(float arg1){
    if(arg1 >= 0){
        return arg1 * 2;
    }else{
        return arg1 * 3;
    }
}
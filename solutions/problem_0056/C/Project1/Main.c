/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>

//Assinatura da função
int absoluto(int value);
void exec();

int main(int argc, char const *argv[]){

    exec();
    exec();
    exec();
    exec();
    exec();
    
    return 0;
}

void exec(){
    int number;
    printf("Digite número: ");
    scanf("%d", &number);
    printf("|%d| = %d\n", number, absoluto(number));
}

int absoluto(int value){
    if(value < 0){
        value = value * -1;
    }
    return value;
}
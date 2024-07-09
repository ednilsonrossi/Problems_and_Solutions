/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>

int main(){
    
    int number, index;

    printf("Qual a tabuada desejada? \n");
    scanf("%d", &number);

    printf("TABUADA DO %d\n\n", number);
    index = 0;

    while(index != 11){
        printf("%d x %d = %d\n", number, index, number * index);
        index ++;
    }

    return 0;
}

/*
 * Elaborado por: Ednilson G Rossi
 * linktr.ee/ednilsonrossi
 */

#include <stdio.h>

int main(){
    
    int number, index;

    number = 1;
    while (number != 11){
        printf("TABUADA DO %d\n", number);

        index = 0;
        while(index != 11){
            printf("%d x %d = %d\n", number, index, number * index);
            index ++;
        }

        number++;
    }
    
    return 0;
}

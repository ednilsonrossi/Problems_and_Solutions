#include <stdio.h>

int main(int argc, char const *argv[]){
    
    int dice_one, dice_two;

    printf("Dado A \t Dado B\n");
    dice_one = 1;
    while(dice_one <= 6){
        dice_two = 1;
        while(dice_two <= 6){
            if(dice_one + dice_two == 7){
                printf("%4d\t%4d\n", dice_one, dice_two);
            }
            dice_two += 1;
        }
        dice_one += 1;
    }

    return 0;
}

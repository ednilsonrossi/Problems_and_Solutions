#include <stdio.h>

int sum_divisors(int number);

int main(){
    int input;
    do{
        printf("Digite um valor inteiro positivo: ");
        scanf("%d", &input);
    }while(input < 1);

    int friend_number = sum_divisors(input);
    int sum_friend_divisor = sum_divisors(friend_number);

    if(input == sum_friend_divisor){
        printf("%d e %d são amigáveis.\n", input, friend_number);
    } else {
        printf("%d não possui um número amigável.\n", input);
    }

    return 0;
}


int sum_divisors(int number){
    int sum = 0;
    if(number > 1){
        for (int divisor = 1; divisor <= number/2; divisor++){
            if(number % divisor == 0){
                sum += divisor;
            }
        }
    }
    return sum;
}
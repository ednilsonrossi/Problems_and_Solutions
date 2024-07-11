#include <stdio.h>

int factorial(int number);

int main(){
    int input;
    printf("Digite o valor: \n");
    scanf("%d", &input);

    printf("%d! = %d\n", input, factorial(input));

    return 0;
}

// Esta proposta de solução considera a regra matemática do 
// fatorial:
// 0! = 1
// N! = N * (N-1)!

int factorial(int number){
    if(number == 0){
        return 1;
    }
    return number * factorial(number - 1);
}
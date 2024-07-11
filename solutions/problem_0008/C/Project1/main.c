#include <stdio.h>

int factorial(int number);

int main(){
    int input;
    printf("Digite o valor: \n");
    scanf("%d", &input);

    printf("%d! = %d\n", input, factorial(input));

    return 0;
}


int factorial(int number){
    // Considerando que 0! = 1 por definição, inicializa-se
    // a variável factorial com 1. Isso garante que se o valor 
    // do argumento for menor que 2 o resultado sempre será
    // o fatorial 1.
    int factorial = 1;
    int n;

    n = 2;
    while(n <= number){
        factorial *= n;
        n++;
    }

    return factorial;
}

// Nesta proposta o calculo do fatorial é realizado de maneira
// inversa, ou seja, de n até 1, por exemplo 5x4x3x2x1
/*
int factorial(int number){
    int factorial = 1;
    while(number > 1){
        factorial *= number;
        number--;
    }
    return factorial;
}
*/
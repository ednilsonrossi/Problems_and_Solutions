#include <stdio.h>
int factorial(int number);

int main(){
    int n, input;
    printf("Quantidade de entradas: ");
    scanf("%d", &n);

    while(n > 0){
        printf("Digite o valor: \n");
        scanf("%d", &input);
        printf("%d! = %d\n", input, factorial(input));

        n--;
    }
    return 0;
}

int factorial(int number){
    int factorial = 1;
    while(number > 1){
        factorial *= number;
        number--;
    }
    return factorial;
}
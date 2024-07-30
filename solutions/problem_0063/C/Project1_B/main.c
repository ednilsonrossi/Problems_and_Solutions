#include <stdio.h>

int f(int n){
    if (n == 0){
        return 0;
    }

    if (n == 1){
        return 1;
    }

    return f(n - 1) + f(n - 2);
}

int main(){
    int term;

    printf("Qual o termo desejado, considerando que o primeiro terno é a posiçao zero?\n");
    scanf("%d", &term);

    printf("Fibonacci(%d) = %d\n\n", term, f(term));

    return 0;
}

#include <stdio.h>
#include <stdbool.h>

bool eh_multiplo(int a, int b);

int main(int argc, char const *argv[]){
    int a, b;

    printf("Digite dois valores: \n");
    scanf("%d%d", &a, &b);

    if(eh_multiplo(a, b)){
        printf("Números são múltiplos.\n");
    }else{
        printf("Números não são múltiplos.\n");
    }

    return 0;
}


bool eh_multiplo(int arg_a, int arg_b){
    return arg_a % arg_b == 0 || arg_b % arg_a == 0;
}
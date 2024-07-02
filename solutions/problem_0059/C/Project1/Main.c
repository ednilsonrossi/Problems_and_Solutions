#include <stdio.h>
#include <stdbool.h>

bool eh_valido(int number);

int main(int argc, char const *argv[])
{
    int input;
    printf("Digite o número: ");
    scanf("%d", &input);

    if(eh_valido(input))
        printf("Número digitado: %d\n", input);
    else
        printf("Valor inserido é inválido!\n");

    return 0;
}

bool eh_valido(int number){
    bool valid = false;

    switch(number){
        case 2:
        case 4:
        case 6:
        case 8:
            valid = true;
            break;
    }

    return valid;
}
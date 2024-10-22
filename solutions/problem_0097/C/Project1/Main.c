#include <stdio.h>

void length_string(char*, int*);

int main(int argc, char const *argv[])
{
    char string[] = "Essa é uma string de tamanho 33.";
    int tamanho;

    length_string(string, &tamanho);
    printf("A string \n\t%s\n\tpossui tamanho igual a %d.\n\n", string, tamanho);

    return 0;
}

void length_string(char *str, int *size){
    *size = 0;
    while( *str != '\0' ) {
        *size += 1;
        str++;
    }
}
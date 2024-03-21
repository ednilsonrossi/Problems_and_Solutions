#include <stdio.h>

int antecessor(int numero);
int sucessor(int numero);

int main(int argc, char const *argv[]){
    int number;

    printf("Digite o número: \n");
    scanf("%d", &number);

    printf("Sequência:\n%d, %d, %d, %d, %d\n",
        antecessor(antecessor(number)),
        antecessor(number),
        number,
        sucessor(number),
        sucessor(sucessor(number))
    );
    return 0;
}


int antecessor(int numero){
    return numero - 1;
}

int sucessor(int numero){
    return numero + 1;
}
#include <stdio.h>
#include "queue.h"

int main() {

    T_Queue fila;
    T_Info saiu;

    fila = init(5);

    printf("%s\n", enqueue(fila, 'A') ? "Entrou" : "Não entrou");
    printf("%s\n", enqueue(fila, 'B') ? "Entrou" : "Não entrou");
    printf("%s\n", enqueue(fila, 'C') ? "Entrou" : "Não entrou");
    printf("%s\n", enqueue(fila, 'D') ? "Entrou" : "Não entrou");
    printf("%s\n", enqueue(fila, 'E') ? "Entrou" : "Não entrou");
    printf("%s\n", enqueue(fila, 'F') ? "Entrou" : "Não entrou");
    printf("%s\n", enqueue(fila, 'G') ? "Entrou" : "Não entrou");
    printf("%s\n", enqueue(fila, 'H') ? "Entrou" : "Não entrou");

    if (dequeue(fila, &saiu))       
        printf("Saiu: %c\n", saiu);
    if (dequeue(fila, &saiu))       
        printf("Saiu: %c\n", saiu);
    if (dequeue(fila, &saiu))       
        printf("Saiu: %c\n", saiu);

    printf("%s\n", jumped_queue(fila, 'Z') ? "Furou a Fila" : "Não furou a fila");
    printf("%s\n", jumped_queue(fila, 'Y') ? "Furou a Fila" : "Não furou a fila");

    while(!is_empty(fila)) {
        dequeue(fila, &saiu);
        printf("Saiu: %c\n", saiu);
    }

    destroy(fila);
    return 0;
}
